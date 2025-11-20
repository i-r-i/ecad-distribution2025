// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLARVI_SIM__SYMS_H_
#define VERILATED_VCLARVI_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vclarvi_sim.h"

// INCLUDE MODULE CLASSES
#include "Vclarvi_sim___024root.h"
#include "Vclarvi_sim___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vclarvi_sim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclarvi_sim* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclarvi_sim___024root          TOP;
    Vclarvi_sim___024unit          TOP____024unit;

    // CONSTRUCTORS
    Vclarvi_sim__Syms(VerilatedContext* contextp, const char* namep, Vclarvi_sim* modelp);
    ~Vclarvi_sim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
