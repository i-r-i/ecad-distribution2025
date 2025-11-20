// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclarvi_sim.h for the primary calling header

#include "Vclarvi_sim__pch.h"
#include "Vclarvi_sim__Syms.h"
#include "Vclarvi_sim___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclarvi_sim___024root___dump_triggers__stl(Vclarvi_sim___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclarvi_sim___024root___eval_triggers__stl(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__0)) 
                                     | ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__0))));
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__0 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits;
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__0 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclarvi_sim___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
