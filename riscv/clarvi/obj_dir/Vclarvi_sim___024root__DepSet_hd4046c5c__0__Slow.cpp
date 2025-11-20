// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclarvi_sim.h for the primary calling header

#include "Vclarvi_sim__pch.h"
#include "Vclarvi_sim___024root.h"

VL_ATTR_COLD void Vclarvi_sim___024root___eval_static__TOP(Vclarvi_sim___024root* vlSelf);

VL_ATTR_COLD void Vclarvi_sim___024root___eval_static(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_static\n"); );
    // Body
    Vclarvi_sim___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vclarvi_sim___024root___eval_static__TOP(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->clarvi_sim__DOT__clock = 1U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret = 0ULL;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles = 0ULL;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus = 0U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie = 0U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec = 0U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_invalid = 1U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_invalid = 1U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid = 1U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_invalid = 1U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_invalid = 1U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc = 0U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp = 0ULL;
}

extern const VlWide<18>/*575:0*/ Vclarvi_sim__ConstPool__CONST_h4896a5de_0;

VL_ATTR_COLD void Vclarvi_sim___024root___eval_initial__TOP(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(18, Vclarvi_sim__ConstPool__CONST_h4896a5de_0)
                 ,  &(vlSelf->clarvi_sim__DOT__mem__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vclarvi_sim___024root___eval_final(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclarvi_sim___024root___dump_triggers__stl(Vclarvi_sim___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vclarvi_sim___024root___eval_phase__stl(Vclarvi_sim___024root* vlSelf);

VL_ATTR_COLD void Vclarvi_sim___024root___eval_settle(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vclarvi_sim___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("clarvi_sim.sv", 30, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vclarvi_sim___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclarvi_sim___024root___dump_triggers__stl(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] clarvi_sim.clarvi.clarvi.ex_address_high_bits or [hybrid] clarvi_sim.clarvi.clarvi.ex_word_offset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclarvi_sim___024root___stl_sequent__TOP__0(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*104:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr;
    VL_ZERO_W(105, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr);
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__rs1_value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__rs1_value = 0;
    // Body
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken 
        = ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid)) 
           & ([&]() {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value 
                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs2_value;
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value;
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation 
                    = (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                >> 4U));
                {
                    if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                        if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                goto __Vlabel1;
                            } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                    goto __Vlabel1;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 1U;
                                    goto __Vlabel1;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                        } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 1U;
                                    goto __Vlabel1;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                    goto __Vlabel1;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                goto __Vlabel1;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                            goto __Vlabel1;
                        }
                    } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                        if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                            goto __Vlabel1;
                        } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                            goto __Vlabel1;
                        } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                = (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                                   >= vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                            goto __Vlabel1;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                = (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                                   < vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                            goto __Vlabel1;
                        }
                    } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                    = VL_GTES_III(32, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                                goto __Vlabel1;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                    = VL_LTS_III(32, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                                goto __Vlabel1;
                            }
                        } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                = (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                                   != vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                            goto __Vlabel1;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                = (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                                   == vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                            goto __Vlabel1;
                        }
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 1U;
                        goto __Vlabel1;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                        goto __Vlabel1;
                    }
                    __Vlabel1: ;
                }
            }(), (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout)));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__rs1_value 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[0U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U];
    {
        if ((0x100U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
            if ((0x80U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                    goto __Vlabel2;
                } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                    if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                        goto __Vlabel2;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc;
                        goto __Vlabel2;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                    goto __Vlabel2;
                }
            } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                    if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                            = ((IData)(4U) + __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U]);
                        goto __Vlabel2;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                        goto __Vlabel2;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                    goto __Vlabel2;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                goto __Vlabel2;
            }
        } else if ((0x80U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
            if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                goto __Vlabel2;
            } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                goto __Vlabel2;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U] 
                       + ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
                           << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
                                       >> 0x12U)));
                goto __Vlabel2;
            }
        } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U] 
                   + ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
                       << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
                                   >> 0x12U)));
            goto __Vlabel2;
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
            if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                    = (0xfffffffeU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__rs1_value 
                                      + ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
                                          << 0xeU) 
                                         | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
                                            >> 0x12U))));
                goto __Vlabel2;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U] 
                       + ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
                           << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
                                       >> 0x12U)));
                goto __Vlabel2;
            }
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
            goto __Vlabel2;
        }
        __Vlabel2: ;
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_target 
        = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_next_pc 
        = ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken)
            ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_target
            : ((IData)(4U) + vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc));
}

VL_ATTR_COLD void Vclarvi_sim___024root___stl_comb__TOP__0(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___stl_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ clarvi_sim__DOT__main_readdata;
    clarvi_sim__DOT__main_readdata = 0;
    CData/*0:0*/ clarvi_sim__DOT__read_from_external;
    clarvi_sim__DOT__read_from_external = 0;
    CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_load_dep;
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_load_dep = 0;
    IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs1_fetched;
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs1_fetched = 0;
    IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs2_fetched;
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs2_fetched = 0;
    IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_load_value;
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_load_value = 0;
    CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ex;
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ex = 0;
    CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ma;
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ma = 0;
    CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_wb;
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_wb = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__pc;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__pc = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__Vfuncout;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__register;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__register = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__Vfuncout;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__register;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__register = 0;
    VlWide<4>/*104:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr;
    VL_ZERO_W(105, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr);
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width = 0;
    CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__is_unsigned;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__is_unsigned = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__value = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__word_offset;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__word_offset = 0;
    // Body
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip 
        = (0xfffff7ffU & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip 
        = ((0xffffff7fU & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip) 
           | ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
               >= vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
              << 7U));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt 
        = (1U & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
                  >> 3U) & ((((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip 
                               & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie) 
                              >> 0xbU) | ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip 
                                           & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie) 
                                          >> 3U)) | 
                            ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip 
                              & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie) 
                             >> 7U))));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_exception 
        = (1U & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc 
                  >> 0x1fU) | (~ ([&]() {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__width = 2U;
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__word_offset 
                            = (3U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc);
                        {
                            if ((2U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__width))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout 
                                    = (0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__word_offset));
                                goto __Vlabel3;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__width))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout 
                                    = (1U & (~ (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__word_offset)));
                                goto __Vlabel3;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout = 1U;
                                goto __Vlabel3;
                            }
                            __Vlabel3: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout)))));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address_error 
        = (1U & ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits) 
                 | (~ ([&]() {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__width 
                            = (3U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                                     >> 1U));
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__word_offset 
                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
                        {
                            if ((2U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__width))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout 
                                    = (0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__word_offset));
                                goto __Vlabel4;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__width))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout 
                                    = (1U & (~ (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__word_offset)));
                                goto __Vlabel4;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout = 1U;
                                goto __Vlabel4;
                            }
                            __Vlabel4: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout)))));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_exception 
        = ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid)) 
           & (((((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address_error) 
                 & (IData)((0U != (0x30U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U])))) 
                | (0x1fU == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                      >> 4U)))) | (0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                                       >> 4U)))) 
              | (0x19U == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                    >> 4U)))));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__trap_pc 
        = ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_exception)
            ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc
            : ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid)
                ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__potential_mepc
                : vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[0U]));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__pc 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_pc;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_instr;
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U] 
        = ((0x1fffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U]) 
           | (0xffe00000U & ((0x80000000U & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                             << 0x18U)) 
                             | ((0x7c000000U & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                << 0xbU)) 
                                | (0x3e00000U & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                 << 1U))))));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[3U] 
        = ((0x1f0U & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[3U]) 
           | (0xfU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                      >> 8U)));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U] 
        = ((0xfffc003fU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U]) 
           | (0x3ffc0U & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                          >> 0xeU)));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
        = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr;
    {
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12 
            = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
               >> 0x14U);
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3 
            = (7U & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
                     >> 0xcU));
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__rs1 
            = (0x1fU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
                        >> 0xfU));
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr 
            = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12;
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__write 
            = (0U != (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__rs1));
        {
            if (((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__write) 
                 & (0xc00U == (0xc00U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))))) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                goto __Vlabel6;
            }
            if ((0x800U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel6;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel6;
                                }
                            } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel6;
                            } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel6;
                            } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    } else if ((1U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel6;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel6;
                                }
                            } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel6;
                            } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel6;
                            } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel6;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                goto __Vlabel6;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                    } else if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel6;
                    }
                } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                } else if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                } else if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel6;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                    goto __Vlabel6;
                }
            } else if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel6;
                                    }
                                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel6;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                }
                            } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                            goto __Vlabel6;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                            goto __Vlabel6;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel6;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel6;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                }
            } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel6;
                        } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel6;
                        } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel6;
                        } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel6;
                            } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel6;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                goto __Vlabel6;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                            goto __Vlabel6;
                        }
                    } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel6;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                            goto __Vlabel6;
                        }
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel6;
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel6;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel6;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel6;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                goto __Vlabel6;
            }
            __Vlabel6: ;
        }
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op 
            = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout;
        if ((3U != (3U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
            goto __Vlabel5;
        }
        if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel5;
                    } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel5;
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                                = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                    ? 0x1eU : 0x1fU);
                            goto __Vlabel5;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                                = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                    ? 0x1dU : 0x1fU);
                            goto __Vlabel5;
                        }
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                            = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                ? 0x1cU : 0x1fU);
                        goto __Vlabel5;
                    } else if ((0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x18U;
                        goto __Vlabel5;
                    } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x19U;
                        goto __Vlabel5;
                    } else if ((0x302U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1aU;
                        goto __Vlabel5;
                    } else if ((0x105U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1bU;
                        goto __Vlabel5;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel5;
                    }
                } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 2U;
                        goto __Vlabel5;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel5;
                    }
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 3U;
                    goto __Vlabel5;
                } else if ((0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 4U;
                    goto __Vlabel5;
                } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 5U;
                    goto __Vlabel5;
                } else if ((4U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 6U;
                    goto __Vlabel5;
                } else if ((6U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 8U;
                    goto __Vlabel5;
                } else if ((5U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 7U;
                    goto __Vlabel5;
                } else if ((7U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 9U;
                    goto __Vlabel5;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel5;
            }
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                    goto __Vlabel5;
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0U;
                    goto __Vlabel5;
                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x12U;
                            goto __Vlabel5;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x11U;
                            goto __Vlabel5;
                        }
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                            = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                ? 0x1fU : ((0x400U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                            ? 0x15U
                                            : 0x14U));
                        goto __Vlabel5;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x10U;
                        goto __Vlabel5;
                    }
                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xfU;
                        goto __Vlabel5;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xeU;
                        goto __Vlabel5;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                            ? 0x1fU : 0x13U);
                    goto __Vlabel5;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((1U & ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
                                   >> 5U) & ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12) 
                                             >> 0xaU)))
                            ? 0xdU : 0xcU);
                    goto __Vlabel5;
                }
            } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel5;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel5;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xbU;
                goto __Vlabel5;
            }
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel5;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 1U;
                goto __Vlabel5;
            } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x12U;
                        goto __Vlabel5;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x11U;
                        goto __Vlabel5;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                            ? 0x1fU : ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                        ? 0x15U : 0x14U));
                    goto __Vlabel5;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x10U;
                    goto __Vlabel5;
                }
            } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xfU;
                    goto __Vlabel5;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xeU;
                    goto __Vlabel5;
                }
            } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                        ? 0x1fU : 0x13U);
                goto __Vlabel5;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((1U & ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
                               >> 5U) & ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12) 
                                         >> 0xaU)))
                        ? 0xdU : 0xcU);
                goto __Vlabel5;
            }
        } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))
                        ? 0x17U : 0x16U);
                goto __Vlabel5;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel5;
            }
        } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
            goto __Vlabel5;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xaU;
            goto __Vlabel5;
        }
        __Vlabel5: ;
    }
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[3U] 
        = ((0xfU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[3U]) 
           | (0x1ffU & ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout) 
                        << 4U)));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U] 
        = ((0xffefffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U]) 
           | ((((((0U != (0x1fU & (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U] 
                                   >> 0x1aU))) & (0xdU 
                                                  != 
                                                  (0x1fU 
                                                   & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                      >> 2U)))) 
                 & (5U != (0x1fU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                    >> 2U)))) & (0x1bU 
                                                 != 
                                                 (0x1fU 
                                                  & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                     >> 2U)))) 
               & (3U != (0x1fU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                  >> 2U)))) << 0x14U));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U] 
        = ((0xfff7ffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U]) 
           | (((0U != (0x1fU & (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U] 
                                >> 0x15U))) & (((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                     >> 2U))) 
                                                | (8U 
                                                   == 
                                                   (0x1fU 
                                                    & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                       >> 2U)))) 
                                               | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                      >> 2U))))) 
              << 0x13U));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
        = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr;
    {
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
            = (0xfffffU & (- (IData)((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                      >> 0x1fU))));
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_12 
            = (0xfffU & (- (IData)((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                    >> 0x1fU))));
        if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                        goto __Vlabel7;
                    } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                        goto __Vlabel7;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                            = ((QData)((IData)((1U 
                                                & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                   >> 0xeU)))) 
                               << 0x20U);
                        goto __Vlabel7;
                    }
                } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                            = ((QData)((IData)((0x80000000U 
                                                | (((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_12) 
                                                    << 0x13U) 
                                                   | ((0x7f800U 
                                                       & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                          >> 1U)) 
                                                      | ((0x400U 
                                                          & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                             >> 0xaU)) 
                                                         | (0x3ffU 
                                                            & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                               >> 0x15U)))))))) 
                               << 1U);
                        goto __Vlabel7;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                        goto __Vlabel7;
                    }
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                        = (0x100000000ULL | (QData)((IData)(
                                                            ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                              << 0xcU) 
                                                             | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                                >> 0x14U)))));
                    goto __Vlabel7;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                        = ((QData)((IData)((0x80000000U 
                                            | ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                << 0xbU) 
                                               | ((0x400U 
                                                   & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                      << 3U)) 
                                                  | ((0x3f0U 
                                                      & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                         >> 0x15U)) 
                                                     | (0xfU 
                                                        & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                           >> 8U)))))))) 
                           << 1U);
                    goto __Vlabel7;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel7;
            }
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                    goto __Vlabel7;
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                        = (0x100000000ULL | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr))));
                    goto __Vlabel7;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                    goto __Vlabel7;
                }
            } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel7;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel7;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                    = (0x100000000ULL | (QData)((IData)(
                                                        ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                                  >> 7U)))))));
                goto __Vlabel7;
            }
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel7;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                    = (0x100000000ULL | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr))));
                goto __Vlabel7;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                    = (0x100000000ULL | (QData)((IData)(
                                                        ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                          << 0xcU) 
                                                         | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                            >> 0x14U)))));
                goto __Vlabel7;
            }
        } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
            goto __Vlabel7;
        } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
            goto __Vlabel7;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                = (0x100000000ULL | (QData)((IData)(
                                                    ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                      << 0xcU) 
                                                     | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                        >> 0x14U)))));
            goto __Vlabel7;
        }
        __Vlabel7: ;
    }
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U] 
        = ((0x3ffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U]) 
           | ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout) 
              << 0x12U));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U] 
        = ((0xfff80000U & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U]) 
           | (((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout) 
               >> 0xeU) | ((IData)((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                                    >> 0x20U)) << 0x12U)));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U] 
        = ((0xffffffcfU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U]) 
           | (0xfffffff0U & (((8U == (0x1fU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                               >> 2U))) 
                              << 5U) | ((0U == (0x1fU 
                                                & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                   >> 2U))) 
                                        << 4U))));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U] 
        = ((0xfffffff1U & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U]) 
           | (0xeU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                      >> 0xbU)));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U] 
        = ((0xfffffffeU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U]) 
           | (((0U != (0x1fU & ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[3U] 
                                 << 1U) | (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U] 
                                           >> 0x1fU)))) 
               & (0x18U != (0x1fU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                     >> 2U)))) & (8U 
                                                  != 
                                                  (0x1fU 
                                                   & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__instr 
                                                      >> 2U)))));
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[0U] 
        = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__pc;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[0U] 
        = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[0U];
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[1U] 
        = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[1U];
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
        = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[2U];
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[3U] 
        = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout[3U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__register 
        = (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                    >> 0x1aU));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__Vfuncout 
        = ((0U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__register))
            ? 0U : ((0x1eU >= (0x1fU & ((IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__register) 
                                        - (IData)(1U))))
                     ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers
                    [(0x1fU & ((IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__register) 
                               - (IData)(1U)))] : 0U));
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs1_fetched 
        = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__4__Vfuncout;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__register 
        = (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                    >> 0x15U));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__Vfuncout 
        = ((0U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__register))
            ? 0U : ((0x1eU >= (0x1fU & ((IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__register) 
                                        - (IData)(1U))))
                     ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers
                    [(0x1fU & ((IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__register) 
                               - (IData)(1U)))] : 0U));
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs2_fetched 
        = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__fetch__5__Vfuncout;
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_load_dep 
        = (((((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_invalid)) 
              & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid))) 
             & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                >> 4U)) & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address_error))) 
           & ((((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                          >> 0x1aU)) == (0x1fU & ((
                                                   vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                                   << 1U) 
                                                  | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U] 
                                                     >> 0x1fU)))) 
               & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                  >> 0x14U)) | (((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                                           >> 0x15U)) 
                                 == (0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                               << 1U) 
                                              | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U] 
                                                 >> 0x1fU)))) 
                                & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                                   >> 0x13U))));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait = 0U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_pending = 0U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex = 0U;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_if 
        = clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_load_dep;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_de 
        = clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_load_dep;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs2_value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[0U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[0U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U];
    {
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm 
            = ((0x40000U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U])
                ? ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U] 
                    << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                >> 0x12U)) : __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value);
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount 
            = (0x1fU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
        if ((0x100U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            if ((0x80U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                        if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                            goto __Vlabel8;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr 
                                = (0xfffU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                             >> 6U));
                            {
                                if ((0x800U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                    if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        if ((0x200U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((0x100U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                if (
                                                    (0x80U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (0x40U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (0x20U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (0x10U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (8U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel9;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                = (IData)(
                                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret 
                                                                           >> 0x20U));
                                                            goto __Vlabel9;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                                       >> 0x20U));
                                                        goto __Vlabel9;
                                                    }
                                                } else if (
                                                           (0x40U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel9;
                                                } else if (
                                                           (0x20U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel9;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel9;
                                                        } else if (
                                                                   (1U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel9;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel9;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0x40000100U;
                                                        goto __Vlabel9;
                                                    }
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel9;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel9;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret);
                                                        goto __Vlabel9;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                                    goto __Vlabel9;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            }
                                        } else if (
                                                   (0x100U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (0x80U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((0x40U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (0x20U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = (IData)(
                                                              (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                               >> 0x20U));
                                                goto __Vlabel9;
                                            }
                                        } else if (
                                                   (0x40U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                            goto __Vlabel9;
                                        }
                                    } else if ((0x200U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    } else if ((0x100U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    } else if ((0x80U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                            goto __Vlabel9;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                        goto __Vlabel9;
                                    }
                                } else if ((0x400U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                    if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        if ((0x100U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((0x80U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (0x20U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (0x10U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (8U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel9;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                = (IData)(
                                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                                                                           >> 0x20U));
                                                            goto __Vlabel9;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp);
                                                        goto __Vlabel9;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    }
                                                } else if (
                                                           (0x20U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (8U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel9;
                                                        } else if (
                                                                   (4U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel9;
                                                        } else if (
                                                                   (2U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                                goto __Vlabel9;
                                                            } else {
                                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                                                goto __Vlabel9;
                                                            }
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel9;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel9;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel9;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    }
                                } else if ((0x200U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                    if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        if ((0x80U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (0x40U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel9;
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel9;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = 
                                                        (0x888U 
                                                         & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip);
                                                    goto __Vlabel9;
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
                                                    goto __Vlabel9;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = 
                                                        (0x8000000fU 
                                                         & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause);
                                                    goto __Vlabel9;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc);
                                                goto __Vlabel9;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
                                                goto __Vlabel9;
                                            }
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel9;
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec);
                                                goto __Vlabel9;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0x888U 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie);
                                                goto __Vlabel9;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel9;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = (0x1800U 
                                                   | (0x88U 
                                                      & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus));
                                            goto __Vlabel9;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel9;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                    goto __Vlabel9;
                                }
                                __Vlabel9: ;
                            }
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                                = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout;
                            goto __Vlabel8;
                        }
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr 
                            = (0xfffU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                         >> 6U));
                        {
                            if ((0x800U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((0x100U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            if ((0x80U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (0x40U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (0x20U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel10;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret 
                                                                       >> 0x20U));
                                                        goto __Vlabel10;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(
                                                                  (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                                   >> 0x20U));
                                                    goto __Vlabel10;
                                                }
                                            } else if (
                                                       (0x40U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (0x20U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel10;
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel10;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel10;
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0x40000100U;
                                                    goto __Vlabel10;
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret);
                                                    goto __Vlabel10;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                                goto __Vlabel10;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        }
                                    } else if ((0x100U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((0x80U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (IData)(
                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                           >> 0x20U));
                                            goto __Vlabel10;
                                        }
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                        goto __Vlabel10;
                                    }
                                } else if ((0x200U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                } else if ((0x100U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                } else if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                        goto __Vlabel10;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                    goto __Vlabel10;
                                }
                            } else if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((0x80U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            if ((0x40U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (0x20U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel10;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                                                                       >> 0x20U));
                                                        goto __Vlabel10;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp);
                                                    goto __Vlabel10;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                }
                                            } else if (
                                                       (0x20U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel10;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel10;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                            goto __Vlabel10;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                                            goto __Vlabel10;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel10;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel10;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel10;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                }
                            } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel10;
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel10;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = 
                                                    (0x888U 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip);
                                                goto __Vlabel10;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
                                                goto __Vlabel10;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = 
                                                    (0x8000000fU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause);
                                                goto __Vlabel10;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0xfffffffcU 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc);
                                            goto __Vlabel10;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
                                            goto __Vlabel10;
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel10;
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0xfffffffcU 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec);
                                            goto __Vlabel10;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0x888U 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie);
                                            goto __Vlabel10;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else if ((1U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel10;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = (0x1800U 
                                               | (0x88U 
                                                  & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus));
                                        goto __Vlabel10;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel10;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                goto __Vlabel10;
                            }
                            __Vlabel10: ;
                        }
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout;
                        goto __Vlabel8;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                    goto __Vlabel8;
                }
            } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                    goto __Vlabel8;
                } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = VL_SHIFTRS_III(32,32,5, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value, (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel8;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           >> (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel8;
                }
            } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           << (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel8;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                    goto __Vlabel8;
                }
            } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                       | vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                goto __Vlabel8;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                       ^ vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                goto __Vlabel8;
            }
        } else if ((0x80U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                               < vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                        goto __Vlabel8;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = VL_LTS_III(32, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                        goto __Vlabel8;
                    }
                } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           - __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value);
                    goto __Vlabel8;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           + vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                    goto __Vlabel8;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                goto __Vlabel8;
            }
        } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
            goto __Vlabel8;
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = ((IData)(4U) + __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[0U]);
            goto __Vlabel8;
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = (((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U] 
                     << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                 >> 0x12U)) + __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[0U]);
            goto __Vlabel8;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U] 
                    << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                >> 0x12U));
            goto __Vlabel8;
        }
        __Vlabel8: ;
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_result 
        = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout;
    vlSelf->clarvi_sim__DOT__main_read = (1U & ((((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid)) 
                                                  & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt))) 
                                                 & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address_error))) 
                                                & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                                                   >> 4U)));
    vlSelf->clarvi_sim__DOT__main_write = (1U & (((
                                                   (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid)) 
                                                   & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt))) 
                                                  & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address_error))) 
                                                 & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                                                    >> 5U)));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address 
        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value 
           + ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U] 
               << 0xeU) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                           >> 0x12U)));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits 
        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address 
           >> 0x1fU);
    vlSelf->clarvi_sim__DOT__main_address = (0x1fffffffU 
                                             & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address 
                                                >> 2U));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset 
        = (3U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address);
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width 
        = (3U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                 >> 1U));
    {
        if ((0U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout 
                = (0xfU & ((IData)(1U) << (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset)));
            goto __Vlabel11;
        } else if ((1U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout 
                = (0xfU & ((IData)(3U) << (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset)));
            goto __Vlabel11;
        } else if ((2U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout 
                = (0xfU & ((IData)(0xfU) << (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset)));
            goto __Vlabel11;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout = 0U;
            goto __Vlabel11;
        }
        __Vlabel11: ;
    }
    vlSelf->clarvi_sim__DOT__main_byteenable = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout;
    vlSelf->clarvi_sim__DOT__main_writedata = VL_SHIFTL_III(32,32,32, vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs2_value, 
                                                            VL_SHIFTL_III(32,32,32, (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset), 3U));
    vlSelf->clarvi_sim__DOT__external_access = (0U 
                                                != 
                                                (0x7fffU 
                                                 & (vlSelf->clarvi_sim__DOT__main_address 
                                                    >> 0xeU)));
    clarvi_sim__DOT__read_from_external = ((IData)(vlSelf->clarvi_sim__DOT__main_read) 
                                           & (IData)(vlSelf->clarvi_sim__DOT__external_access));
    clarvi_sim__DOT__main_readdata = ((IData)(clarvi_sim__DOT__read_from_external)
                                       ? vlSelf->clarvi_sim__DOT__external_readdata
                                       : vlSelf->clarvi_sim__DOT____Vcellout__mem__avs_a_readdata);
    vlSelf->clarvi_sim__DOT____Vcellinp__mem__avs_a_write 
        = ((~ (IData)(vlSelf->clarvi_sim__DOT__external_access)) 
           & (IData)(vlSelf->clarvi_sim__DOT__main_write));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__word_offset 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_word_offset;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__value 
        = clarvi_sim__DOT__main_readdata;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__is_unsigned 
        = (1U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                 >> 3U));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width 
        = (3U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                 >> 1U));
    {
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__word_offset 
            = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__word_offset;
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__value 
            = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__value;
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__width 
            = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width;
        {
            if ((0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__width))) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout 
                    = (0xffU & VL_SHIFTR_III(32,32,32, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__value, 
                                             VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__word_offset), 3U)));
                goto __Vlabel13;
            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__width))) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout 
                    = (0xffffU & VL_SHIFTR_III(32,32,32, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__value, 
                                               VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__word_offset), 3U)));
                goto __Vlabel13;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout = 0U;
                goto __Vlabel13;
            }
            __Vlabel13: ;
        }
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value 
            = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout;
        if ((0U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout 
                = ((IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__is_unsigned)
                    ? (0xffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value)
                    : (((- (IData)((1U & (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value)));
            goto __Vlabel12;
        } else if ((1U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout 
                = ((IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__is_unsigned)
                    ? (0xffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value)
                    : (((- (IData)((1U & (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value)));
            goto __Vlabel12;
        } else if ((2U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout 
                = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__value;
            goto __Vlabel12;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout = 0U;
            goto __Vlabel12;
        }
        __Vlabel12: ;
    }
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_load_value 
        = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_result 
        = ((0x10U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U])
            ? clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_load_value
            : vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_result);
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ex 
        = ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid)) 
           & (1U == (0x11U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U])));
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ma 
        = (1U & ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_invalid)) 
                 & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U]));
    clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_wb 
        = (1U & ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_invalid)) 
                 & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[1U]));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs1_forward 
        = (((IData)(clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ex) 
            & ((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                          << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U] 
                                    >> 0x1fU))) == 
               (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                         >> 0x1aU)))) ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_result
            : (((IData)(clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ma) 
                & ((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                              << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                        >> 0x1fU))) 
                   == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                                >> 0x1aU)))) ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_result
                : (((IData)(clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_wb) 
                    & ((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[3U] 
                                  << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[2U] 
                                            >> 0x1fU))) 
                       == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                                    >> 0x1aU)))) ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_value
                    : clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs1_fetched)));
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs2_forward 
        = (((IData)(clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ex) 
            & ((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                          << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U] 
                                    >> 0x1fU))) == 
               (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                         >> 0x15U)))) ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_result
            : (((IData)(clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_ma) 
                & ((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                              << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                        >> 0x1fU))) 
                   == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                                >> 0x15U)))) ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_result
                : (((IData)(clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__could_forward_from_wb) 
                    & ((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[3U] 
                                  << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[2U] 
                                            >> 0x1fU))) 
                       == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U] 
                                    >> 0x15U)))) ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_value
                    : clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs2_fetched)));
}

VL_ATTR_COLD void Vclarvi_sim___024root___eval_stl(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vclarvi_sim___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vclarvi_sim___024root___stl_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vclarvi_sim___024root___eval_triggers__stl(Vclarvi_sim___024root* vlSelf);

VL_ATTR_COLD bool Vclarvi_sim___024root___eval_phase__stl(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vclarvi_sim___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vclarvi_sim___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclarvi_sim___024root___dump_triggers__act(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] clarvi_sim.clarvi.clarvi.ex_address_high_bits or [hybrid] clarvi_sim.clarvi.clarvi.ex_word_offset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clarvi_sim.clock)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclarvi_sim___024root___dump_triggers__nba(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] clarvi_sim.clarvi.clarvi.ex_address_high_bits or [hybrid] clarvi_sim.clarvi.clarvi.ex_word_offset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clarvi_sim.clock)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclarvi_sim___024root___ctor_var_reset(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clarvi_sim__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__main_address = VL_RAND_RESET_I(29);
    vlSelf->clarvi_sim__DOT__main_byteenable = VL_RAND_RESET_I(4);
    vlSelf->clarvi_sim__DOT__main_read = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__main_write = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__main_writedata = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__external_access = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__external_readdata = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT____Vcellout__mem__avs_b_readdata = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT____Vcellinp__mem__avs_a_write = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT____Vcellout__mem__avs_a_readdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->clarvi_sim__DOT__mem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret = VL_RAND_RESET_Q(64);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles = VL_RAND_RESET_Q(64);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_exception = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_exception = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address_error = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_invalid = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_invalid = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_invalid = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_invalid = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_pending = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_if = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_de = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_pc = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_pc = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_instr = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instr_read_data_buffer = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_stall_on_prev = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs1_forward = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs2_forward = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(105, vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr);
    VL_RAND_RESET_W(105, vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs2_value = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(105, vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_result = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_result = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset = VL_RAND_RESET_I(2);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_word_offset = VL_RAND_RESET_I(2);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_target = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_next_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(105, vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_result = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_value = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp = VL_RAND_RESET_Q(64);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__trap_pc = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__potential_mepc = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter = VL_RAND_RESET_Q(64);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target = VL_RAND_RESET_I(32);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT____Vlvbound_h97a065f5__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(105, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12 = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3 = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__rs1 = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__write = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = VL_RAND_RESET_Q(33);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 = VL_RAND_RESET_I(20);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_12 = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__width = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__value = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__word_offset = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__word_offset = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__width = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__word_offset = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__width = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__0 = VL_RAND_RESET_I(2);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
