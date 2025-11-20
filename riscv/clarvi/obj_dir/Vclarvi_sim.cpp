// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclarvi_sim__pch.h"

//============================================================
// Constructors

Vclarvi_sim::Vclarvi_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclarvi_sim__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclarvi_sim::Vclarvi_sim(const char* _vcname__)
    : Vclarvi_sim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclarvi_sim::~Vclarvi_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclarvi_sim___024root___eval_debug_assertions(Vclarvi_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vclarvi_sim___024root___eval_static(Vclarvi_sim___024root* vlSelf);
void Vclarvi_sim___024root___eval_initial(Vclarvi_sim___024root* vlSelf);
void Vclarvi_sim___024root___eval_settle(Vclarvi_sim___024root* vlSelf);
void Vclarvi_sim___024root___eval(Vclarvi_sim___024root* vlSelf);

void Vclarvi_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclarvi_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclarvi_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclarvi_sim___024root___eval_static(&(vlSymsp->TOP));
        Vclarvi_sim___024root___eval_initial(&(vlSymsp->TOP));
        Vclarvi_sim___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclarvi_sim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclarvi_sim::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vclarvi_sim::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vclarvi_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclarvi_sim___024root___eval_final(Vclarvi_sim___024root* vlSelf);

VL_ATTR_COLD void Vclarvi_sim::final() {
    Vclarvi_sim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclarvi_sim::hierName() const { return vlSymsp->name(); }
const char* Vclarvi_sim::modelName() const { return "Vclarvi_sim"; }
unsigned Vclarvi_sim::threads() const { return 1; }
void Vclarvi_sim::prepareClone() const { contextp()->prepareClone(); }
void Vclarvi_sim::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vclarvi_sim::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vclarvi_sim::trace()' called on model that was Verilated without --trace option");
}
