// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclarvi_sim.h for the primary calling header

#include "Vclarvi_sim__pch.h"
#include "Vclarvi_sim___024root.h"

VL_ATTR_COLD void Vclarvi_sim___024root___eval_initial__TOP(Vclarvi_sim___024root* vlSelf);
VlCoroutine Vclarvi_sim___024root___eval_initial__TOP__Vtiming__0(Vclarvi_sim___024root* vlSelf);
VlCoroutine Vclarvi_sim___024root___eval_initial__TOP__Vtiming__1(Vclarvi_sim___024root* vlSelf);

void Vclarvi_sim___024root___eval_initial(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_initial\n"); );
    // Body
    Vclarvi_sim___024root___eval_initial__TOP(vlSelf);
    Vclarvi_sim___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vclarvi_sim___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__0 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits;
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__0 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__1 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits;
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__1 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clock__0 
        = vlSelf->clarvi_sim__DOT__clock;
}

VL_INLINE_OPT VlCoroutine Vclarvi_sim___024root___eval_initial__TOP__Vtiming__0(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "clarvi_sim.sv", 
                                           129);
        vlSelf->clarvi_sim__DOT__clock = (1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clock)));
    }
}

VL_INLINE_OPT VlCoroutine Vclarvi_sim___024root___eval_initial__TOP__Vtiming__1(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x3b9aca00ULL, 
                                       nullptr, "clarvi_sim.sv", 
                                       133);
    VL_WRITEF("Stopping the simulation after a million clock cycles.\n");
    VL_FINISH_MT("clarvi_sim.sv", 134, "");
}

VL_INLINE_OPT void Vclarvi_sim___024root___act_sequent__TOP__0(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___act_sequent__TOP__0\n"); );
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
                                goto __Vlabel8;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__width))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout 
                                    = (1U & (~ (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__word_offset)));
                                goto __Vlabel8;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout = 1U;
                                goto __Vlabel8;
                            }
                            __Vlabel8: ;
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
                                goto __Vlabel9;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__width))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout 
                                    = (1U & (~ (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__word_offset)));
                                goto __Vlabel9;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout = 1U;
                                goto __Vlabel9;
                            }
                            __Vlabel9: ;
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
                goto __Vlabel11;
            }
            if ((0x800U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel11;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel11;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel11;
                                }
                            } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel11;
                            } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel11;
                            } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel11;
                                    } else if ((1U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel11;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel11;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel11;
                                }
                            } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel11;
                            } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel11;
                            } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel11;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                goto __Vlabel11;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel11;
                        }
                    } else if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel11;
                    }
                } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                } else if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                } else if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel11;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                    goto __Vlabel11;
                }
            } else if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel11;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel11;
                                    }
                                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel11;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                }
                            } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel11;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel11;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                            goto __Vlabel11;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                            goto __Vlabel11;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel11;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel11;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel11;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel11;
                        }
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                }
            } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel11;
                        } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel11;
                        } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel11;
                        } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel11;
                            } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel11;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                goto __Vlabel11;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                            goto __Vlabel11;
                        }
                    } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel11;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                            goto __Vlabel11;
                        }
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel11;
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel11;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel11;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel11;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                goto __Vlabel11;
            }
            __Vlabel11: ;
        }
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op 
            = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout;
        if ((3U != (3U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
            goto __Vlabel10;
        }
        if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel10;
                    } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel10;
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                                = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                    ? 0x1eU : 0x1fU);
                            goto __Vlabel10;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                                = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                    ? 0x1dU : 0x1fU);
                            goto __Vlabel10;
                        }
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                            = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                ? 0x1cU : 0x1fU);
                        goto __Vlabel10;
                    } else if ((0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x18U;
                        goto __Vlabel10;
                    } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x19U;
                        goto __Vlabel10;
                    } else if ((0x302U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1aU;
                        goto __Vlabel10;
                    } else if ((0x105U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1bU;
                        goto __Vlabel10;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel10;
                    }
                } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 2U;
                        goto __Vlabel10;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel10;
                    }
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 3U;
                    goto __Vlabel10;
                } else if ((0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 4U;
                    goto __Vlabel10;
                } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 5U;
                    goto __Vlabel10;
                } else if ((4U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 6U;
                    goto __Vlabel10;
                } else if ((6U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 8U;
                    goto __Vlabel10;
                } else if ((5U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 7U;
                    goto __Vlabel10;
                } else if ((7U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 9U;
                    goto __Vlabel10;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel10;
            }
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                    goto __Vlabel10;
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0U;
                    goto __Vlabel10;
                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x12U;
                            goto __Vlabel10;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x11U;
                            goto __Vlabel10;
                        }
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                            = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                ? 0x1fU : ((0x400U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                            ? 0x15U
                                            : 0x14U));
                        goto __Vlabel10;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x10U;
                        goto __Vlabel10;
                    }
                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xfU;
                        goto __Vlabel10;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xeU;
                        goto __Vlabel10;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                            ? 0x1fU : 0x13U);
                    goto __Vlabel10;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((1U & ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
                                   >> 5U) & ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12) 
                                             >> 0xaU)))
                            ? 0xdU : 0xcU);
                    goto __Vlabel10;
                }
            } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel10;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel10;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xbU;
                goto __Vlabel10;
            }
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel10;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 1U;
                goto __Vlabel10;
            } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x12U;
                        goto __Vlabel10;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x11U;
                        goto __Vlabel10;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                            ? 0x1fU : ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                        ? 0x15U : 0x14U));
                    goto __Vlabel10;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x10U;
                    goto __Vlabel10;
                }
            } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xfU;
                    goto __Vlabel10;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xeU;
                    goto __Vlabel10;
                }
            } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                        ? 0x1fU : 0x13U);
                goto __Vlabel10;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((1U & ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
                               >> 5U) & ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12) 
                                         >> 0xaU)))
                        ? 0xdU : 0xcU);
                goto __Vlabel10;
            }
        } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))
                        ? 0x17U : 0x16U);
                goto __Vlabel10;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel10;
            }
        } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
            goto __Vlabel10;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xaU;
            goto __Vlabel10;
        }
        __Vlabel10: ;
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
                        goto __Vlabel12;
                    } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                        goto __Vlabel12;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                            = ((QData)((IData)((1U 
                                                & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                   >> 0xeU)))) 
                               << 0x20U);
                        goto __Vlabel12;
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
                        goto __Vlabel12;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                        goto __Vlabel12;
                    }
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                        = (0x100000000ULL | (QData)((IData)(
                                                            ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                              << 0xcU) 
                                                             | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                                >> 0x14U)))));
                    goto __Vlabel12;
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
                    goto __Vlabel12;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel12;
            }
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                    goto __Vlabel12;
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                        = (0x100000000ULL | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr))));
                    goto __Vlabel12;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                    goto __Vlabel12;
                }
            } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel12;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel12;
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
                goto __Vlabel12;
            }
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel12;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                    = (0x100000000ULL | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr))));
                goto __Vlabel12;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                    = (0x100000000ULL | (QData)((IData)(
                                                        ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                          << 0xcU) 
                                                         | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                            >> 0x14U)))));
                goto __Vlabel12;
            }
        } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
            goto __Vlabel12;
        } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
            goto __Vlabel12;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                = (0x100000000ULL | (QData)((IData)(
                                                    ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                      << 0xcU) 
                                                     | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                        >> 0x14U)))));
            goto __Vlabel12;
        }
        __Vlabel12: ;
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
                            goto __Vlabel13;
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
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (0x20U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (0x10U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (8U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel14;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                = (IData)(
                                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret 
                                                                           >> 0x20U));
                                                            goto __Vlabel14;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                                       >> 0x20U));
                                                        goto __Vlabel14;
                                                    }
                                                } else if (
                                                           (0x40U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel14;
                                                } else if (
                                                           (0x20U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel14;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel14;
                                                        } else if (
                                                                   (1U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel14;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel14;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0x40000100U;
                                                        goto __Vlabel14;
                                                    }
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel14;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel14;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret);
                                                        goto __Vlabel14;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                                    goto __Vlabel14;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            }
                                        } else if (
                                                   (0x100U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (0x80U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((0x40U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (0x20U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = (IData)(
                                                              (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                               >> 0x20U));
                                                goto __Vlabel14;
                                            }
                                        } else if (
                                                   (0x40U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                            goto __Vlabel14;
                                        }
                                    } else if ((0x200U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    } else if ((0x100U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    } else if ((0x80U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                            goto __Vlabel14;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                        goto __Vlabel14;
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
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (0x10U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (8U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel14;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                = (IData)(
                                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                                                                           >> 0x20U));
                                                            goto __Vlabel14;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp);
                                                        goto __Vlabel14;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
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
                                                            goto __Vlabel14;
                                                        } else if (
                                                                   (4U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel14;
                                                        } else if (
                                                                   (2U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                                goto __Vlabel14;
                                                            } else {
                                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                                                goto __Vlabel14;
                                                            }
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel14;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel14;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel14;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    }
                                } else if ((0x200U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                    if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        if ((0x80U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (0x40U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel14;
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel14;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = 
                                                        (0x888U 
                                                         & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip);
                                                    goto __Vlabel14;
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
                                                    goto __Vlabel14;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = 
                                                        (0x8000000fU 
                                                         & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause);
                                                    goto __Vlabel14;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc);
                                                goto __Vlabel14;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
                                                goto __Vlabel14;
                                            }
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel14;
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec);
                                                goto __Vlabel14;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0x888U 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie);
                                                goto __Vlabel14;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel14;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = (0x1800U 
                                                   | (0x88U 
                                                      & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus));
                                            goto __Vlabel14;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel14;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                    goto __Vlabel14;
                                }
                                __Vlabel14: ;
                            }
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                                = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout;
                            goto __Vlabel13;
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
                                                    goto __Vlabel15;
                                                } else if (
                                                           (0x20U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel15;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret 
                                                                       >> 0x20U));
                                                        goto __Vlabel15;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(
                                                                  (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                                   >> 0x20U));
                                                    goto __Vlabel15;
                                                }
                                            } else if (
                                                       (0x40U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel15;
                                            } else if (
                                                       (0x20U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel15;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel15;
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel15;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel15;
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0x40000100U;
                                                    goto __Vlabel15;
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel15;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel15;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret);
                                                    goto __Vlabel15;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                                goto __Vlabel15;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        }
                                    } else if ((0x100U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((0x80U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (IData)(
                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                           >> 0x20U));
                                            goto __Vlabel15;
                                        }
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                        goto __Vlabel15;
                                    }
                                } else if ((0x200U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                } else if ((0x100U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                } else if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                        goto __Vlabel15;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                    goto __Vlabel15;
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
                                                    goto __Vlabel15;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel15;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                                                                       >> 0x20U));
                                                        goto __Vlabel15;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp);
                                                    goto __Vlabel15;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
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
                                                        goto __Vlabel15;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel15;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                            goto __Vlabel15;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                                            goto __Vlabel15;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel15;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel15;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel15;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                }
                            } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel15;
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel15;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = 
                                                    (0x888U 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip);
                                                goto __Vlabel15;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
                                                goto __Vlabel15;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = 
                                                    (0x8000000fU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause);
                                                goto __Vlabel15;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0xfffffffcU 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc);
                                            goto __Vlabel15;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
                                            goto __Vlabel15;
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel15;
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0xfffffffcU 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec);
                                            goto __Vlabel15;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0x888U 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie);
                                            goto __Vlabel15;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else if ((1U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel15;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = (0x1800U 
                                               | (0x88U 
                                                  & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus));
                                        goto __Vlabel15;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel15;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                goto __Vlabel15;
                            }
                            __Vlabel15: ;
                        }
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout;
                        goto __Vlabel13;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                    goto __Vlabel13;
                }
            } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                    goto __Vlabel13;
                } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = VL_SHIFTRS_III(32,32,5, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value, (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel13;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           >> (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel13;
                }
            } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           << (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel13;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                    goto __Vlabel13;
                }
            } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                       | vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                goto __Vlabel13;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                       ^ vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                goto __Vlabel13;
            }
        } else if ((0x80U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                               < vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                        goto __Vlabel13;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = VL_LTS_III(32, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                        goto __Vlabel13;
                    }
                } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           - __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value);
                    goto __Vlabel13;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           + vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                    goto __Vlabel13;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                goto __Vlabel13;
            }
        } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
            goto __Vlabel13;
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = ((IData)(4U) + __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[0U]);
            goto __Vlabel13;
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = (((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U] 
                     << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                 >> 0x12U)) + __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[0U]);
            goto __Vlabel13;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U] 
                    << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                >> 0x12U));
            goto __Vlabel13;
        }
        __Vlabel13: ;
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
            goto __Vlabel16;
        } else if ((1U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout 
                = (0xfU & ((IData)(3U) << (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset)));
            goto __Vlabel16;
        } else if ((2U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout 
                = (0xfU & ((IData)(0xfU) << (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset)));
            goto __Vlabel16;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout = 0U;
            goto __Vlabel16;
        }
        __Vlabel16: ;
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
                goto __Vlabel18;
            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__width))) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout 
                    = (0xffffU & VL_SHIFTR_III(32,32,32, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__value, 
                                               VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__word_offset), 3U)));
                goto __Vlabel18;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout = 0U;
                goto __Vlabel18;
            }
            __Vlabel18: ;
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
            goto __Vlabel17;
        } else if ((1U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout 
                = ((IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__is_unsigned)
                    ? (0xffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value)
                    : (((- (IData)((1U & (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value)));
            goto __Vlabel17;
        } else if ((2U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout 
                = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__value;
            goto __Vlabel17;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout = 0U;
            goto __Vlabel17;
        }
        __Vlabel17: ;
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

void Vclarvi_sim___024root___eval_act(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vclarvi_sim___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vclarvi_sim___024root___nba_comb__TOP__0(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___nba_comb__TOP__0\n"); );
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
                                goto __Vlabel19;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__width))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout 
                                    = (1U & (~ (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__word_offset)));
                                goto __Vlabel19;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout = 1U;
                                goto __Vlabel19;
                            }
                            __Vlabel19: ;
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
                                goto __Vlabel20;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__width))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout 
                                    = (1U & (~ (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__word_offset)));
                                goto __Vlabel20;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout = 1U;
                                goto __Vlabel20;
                            }
                            __Vlabel20: ;
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
                goto __Vlabel22;
            }
            if ((0x800U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel22;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel22;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel22;
                                }
                            } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel22;
                            } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel22;
                            } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel22;
                                    } else if ((1U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel22;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel22;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel22;
                                }
                            } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel22;
                            } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel22;
                            } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel22;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                goto __Vlabel22;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel22;
                        }
                    } else if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel22;
                    }
                } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                } else if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                } else if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel22;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                    goto __Vlabel22;
                }
            } else if ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel22;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                        goto __Vlabel22;
                                    }
                                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                    goto __Vlabel22;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                }
                            } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                    if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel22;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel22;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                            goto __Vlabel22;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                            goto __Vlabel22;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                        goto __Vlabel22;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                    goto __Vlabel22;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel22;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel22;
                        }
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                }
            } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                    if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel22;
                        } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel22;
                        } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel22;
                        } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel22;
                            } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                                goto __Vlabel22;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                                goto __Vlabel22;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                            goto __Vlabel22;
                        }
                    } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                            goto __Vlabel22;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                            goto __Vlabel22;
                        }
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel22;
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                        goto __Vlabel22;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 1U;
                        goto __Vlabel22;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                    goto __Vlabel22;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout = 0U;
                goto __Vlabel22;
            }
            __Vlabel22: ;
        }
        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op 
            = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout;
        if ((3U != (3U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
            goto __Vlabel21;
        }
        if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel21;
                    } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel21;
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                                = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                    ? 0x1eU : 0x1fU);
                            goto __Vlabel21;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                                = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                    ? 0x1dU : 0x1fU);
                            goto __Vlabel21;
                        }
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                            = ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op)
                                ? 0x1cU : 0x1fU);
                        goto __Vlabel21;
                    } else if ((0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x18U;
                        goto __Vlabel21;
                    } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x19U;
                        goto __Vlabel21;
                    } else if ((0x302U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1aU;
                        goto __Vlabel21;
                    } else if ((0x105U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1bU;
                        goto __Vlabel21;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel21;
                    }
                } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 2U;
                        goto __Vlabel21;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                        goto __Vlabel21;
                    }
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 3U;
                    goto __Vlabel21;
                } else if ((0U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 4U;
                    goto __Vlabel21;
                } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 5U;
                    goto __Vlabel21;
                } else if ((4U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 6U;
                    goto __Vlabel21;
                } else if ((6U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 8U;
                    goto __Vlabel21;
                } else if ((5U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 7U;
                    goto __Vlabel21;
                } else if ((7U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 9U;
                    goto __Vlabel21;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel21;
            }
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                    goto __Vlabel21;
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0U;
                    goto __Vlabel21;
                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x12U;
                            goto __Vlabel21;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x11U;
                            goto __Vlabel21;
                        }
                    } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                            = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                ? 0x1fU : ((0x400U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                            ? 0x15U
                                            : 0x14U));
                        goto __Vlabel21;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x10U;
                        goto __Vlabel21;
                    }
                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xfU;
                        goto __Vlabel21;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xeU;
                        goto __Vlabel21;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                            ? 0x1fU : 0x13U);
                    goto __Vlabel21;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((1U & ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
                                   >> 5U) & ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12) 
                                             >> 0xaU)))
                            ? 0xdU : 0xcU);
                    goto __Vlabel21;
                }
            } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel21;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel21;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xbU;
                goto __Vlabel21;
            }
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel21;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 1U;
                goto __Vlabel21;
            } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x12U;
                        goto __Vlabel21;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x11U;
                        goto __Vlabel21;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                        = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                            ? 0x1fU : ((0x400U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                                        ? 0x15U : 0x14U));
                    goto __Vlabel21;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x10U;
                    goto __Vlabel21;
                }
            } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xfU;
                    goto __Vlabel21;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xeU;
                    goto __Vlabel21;
                }
            } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12))
                        ? 0x1fU : 0x13U);
                goto __Vlabel21;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((1U & ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr 
                               >> 5U) & ((IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12) 
                                         >> 0xaU)))
                        ? 0xdU : 0xcU);
                goto __Vlabel21;
            }
        } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout 
                    = ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3))
                        ? 0x17U : 0x16U);
                goto __Vlabel21;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
                goto __Vlabel21;
            }
        } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0x1fU;
            goto __Vlabel21;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout = 0xaU;
            goto __Vlabel21;
        }
        __Vlabel21: ;
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
                        goto __Vlabel23;
                    } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                        goto __Vlabel23;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                            = ((QData)((IData)((1U 
                                                & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                   >> 0xeU)))) 
                               << 0x20U);
                        goto __Vlabel23;
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
                        goto __Vlabel23;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                        goto __Vlabel23;
                    }
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                        = (0x100000000ULL | (QData)((IData)(
                                                            ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                              << 0xcU) 
                                                             | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                                >> 0x14U)))));
                    goto __Vlabel23;
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
                    goto __Vlabel23;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel23;
            }
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                    goto __Vlabel23;
                } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                        = (0x100000000ULL | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr))));
                    goto __Vlabel23;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                    goto __Vlabel23;
                }
            } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel23;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel23;
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
                goto __Vlabel23;
            }
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
                goto __Vlabel23;
            } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                    = (0x100000000ULL | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr))));
                goto __Vlabel23;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                    = (0x100000000ULL | (QData)((IData)(
                                                        ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                          << 0xcU) 
                                                         | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                            >> 0x14U)))));
                goto __Vlabel23;
            }
        } else if ((8U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
            goto __Vlabel23;
        } else if ((4U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr)) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout = 0ULL;
            goto __Vlabel23;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout 
                = (0x100000000ULL | (QData)((IData)(
                                                    ((vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20 
                                                      << 0xcU) 
                                                     | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__instr 
                                                        >> 0x14U)))));
            goto __Vlabel23;
        }
        __Vlabel23: ;
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
                            goto __Vlabel24;
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
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (0x20U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (0x10U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (8U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel25;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                = (IData)(
                                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret 
                                                                           >> 0x20U));
                                                            goto __Vlabel25;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                                       >> 0x20U));
                                                        goto __Vlabel25;
                                                    }
                                                } else if (
                                                           (0x40U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel25;
                                                } else if (
                                                           (0x20U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel25;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel25;
                                                        } else if (
                                                                   (1U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel25;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel25;
                                                        }
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0x40000100U;
                                                        goto __Vlabel25;
                                                    }
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel25;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel25;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret);
                                                        goto __Vlabel25;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                                    goto __Vlabel25;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            }
                                        } else if (
                                                   (0x100U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (0x80U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((0x40U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (0x20U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = (IData)(
                                                              (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                               >> 0x20U));
                                                goto __Vlabel25;
                                            }
                                        } else if (
                                                   (0x40U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                            goto __Vlabel25;
                                        }
                                    } else if ((0x200U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    } else if ((0x100U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    } else if ((0x80U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                            goto __Vlabel25;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                        goto __Vlabel25;
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
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (0x10U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (8U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel25;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                = (IData)(
                                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                                                                           >> 0x20U));
                                                            goto __Vlabel25;
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp);
                                                        goto __Vlabel25;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
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
                                                            goto __Vlabel25;
                                                        } else if (
                                                                   (4U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel25;
                                                        } else if (
                                                                   (2U 
                                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                                goto __Vlabel25;
                                                            } else {
                                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                                                goto __Vlabel25;
                                                            }
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                            goto __Vlabel25;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                        goto __Vlabel25;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel25;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    }
                                } else if ((0x200U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                    if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                        if ((0x80U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (0x40U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((0x20U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel25;
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                    goto __Vlabel25;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = 
                                                        (0x888U 
                                                         & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip);
                                                    goto __Vlabel25;
                                                }
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
                                                    goto __Vlabel25;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                        = 
                                                        (0x8000000fU 
                                                         & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause);
                                                    goto __Vlabel25;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc);
                                                goto __Vlabel25;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
                                                goto __Vlabel25;
                                            }
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                                goto __Vlabel25;
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec);
                                                goto __Vlabel25;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                    = 
                                                    (0x888U 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie);
                                                goto __Vlabel25;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                            goto __Vlabel25;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout 
                                                = (0x1800U 
                                                   | (0x88U 
                                                      & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus));
                                            goto __Vlabel25;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                        goto __Vlabel25;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout = 0U;
                                    goto __Vlabel25;
                                }
                                __Vlabel25: ;
                            }
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                                = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout;
                            goto __Vlabel24;
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
                                                    goto __Vlabel26;
                                                } else if (
                                                           (0x20U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel26;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret 
                                                                       >> 0x20U));
                                                        goto __Vlabel26;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(
                                                                  (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                                   >> 0x20U));
                                                    goto __Vlabel26;
                                                }
                                            } else if (
                                                       (0x40U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel26;
                                            } else if (
                                                       (0x20U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel26;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel26;
                                                    } else if (
                                                               (1U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel26;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel26;
                                                    }
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0x40000100U;
                                                    goto __Vlabel26;
                                                }
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel26;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel26;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret);
                                                    goto __Vlabel26;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                                goto __Vlabel26;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        }
                                    } else if ((0x100U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((0x80U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((0x40U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (IData)(
                                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
                                                           >> 0x20U));
                                            goto __Vlabel26;
                                        }
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
                                        goto __Vlabel26;
                                    }
                                } else if ((0x200U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                } else if ((0x100U 
                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                } else if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                } else if ((0x40U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                } else if ((0x20U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                } else if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                        goto __Vlabel26;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                    goto __Vlabel26;
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
                                                    goto __Vlabel26;
                                                } else if (
                                                           (0x10U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (8U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (4U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                } else if (
                                                           (2U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel26;
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                            = (IData)(
                                                                      (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                                                                       >> 0x20U));
                                                        goto __Vlabel26;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                        = (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp);
                                                    goto __Vlabel26;
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
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
                                                        goto __Vlabel26;
                                                    } else if (
                                                               (4U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel26;
                                                    } else if (
                                                               (2U 
                                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                            goto __Vlabel26;
                                                        } else {
                                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
                                                            goto __Vlabel26;
                                                        }
                                                    } else {
                                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                        goto __Vlabel26;
                                                    }
                                                } else {
                                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                    goto __Vlabel26;
                                                }
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel26;
                                            }
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                }
                            } else if ((0x200U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                if ((0x100U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                    if ((0x80U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((0x40U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((0x20U 
                                             & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel26;
                                            } else if (
                                                       (1U 
                                                        & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                                goto __Vlabel26;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = 
                                                    (0x888U 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip);
                                                goto __Vlabel26;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            if ((1U 
                                                 & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
                                                goto __Vlabel26;
                                            } else {
                                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                    = 
                                                    (0x8000000fU 
                                                     & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause);
                                                goto __Vlabel26;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0xfffffffcU 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc);
                                            goto __Vlabel26;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
                                            goto __Vlabel26;
                                        }
                                    } else if ((0x20U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((8U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((4U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                            goto __Vlabel26;
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0xfffffffcU 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec);
                                            goto __Vlabel26;
                                        } else {
                                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                                = (0x888U 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie);
                                            goto __Vlabel26;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else if ((1U 
                                                & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr))) {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                        goto __Vlabel26;
                                    } else {
                                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout 
                                            = (0x1800U 
                                               | (0x88U 
                                                  & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus));
                                        goto __Vlabel26;
                                    }
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                    goto __Vlabel26;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout = 0U;
                                goto __Vlabel26;
                            }
                            __Vlabel26: ;
                        }
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout;
                        goto __Vlabel24;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                    goto __Vlabel24;
                }
            } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                    goto __Vlabel24;
                } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = VL_SHIFTRS_III(32,32,5, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value, (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel24;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           >> (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel24;
                }
            } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           << (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount));
                    goto __Vlabel24;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                    goto __Vlabel24;
                }
            } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                       | vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                goto __Vlabel24;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                       ^ vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                goto __Vlabel24;
            }
        } else if ((0x80U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                               < vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                        goto __Vlabel24;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                            = VL_LTS_III(32, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                        goto __Vlabel24;
                    }
                } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           - __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value);
                    goto __Vlabel24;
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                        = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs1_value 
                           + vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm);
                    goto __Vlabel24;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
                goto __Vlabel24;
            }
        } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout = 0U;
            goto __Vlabel24;
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = ((IData)(4U) + __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[0U]);
            goto __Vlabel24;
        } else if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = (((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U] 
                     << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                 >> 0x12U)) + __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[0U]);
            goto __Vlabel24;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout 
                = ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[2U] 
                    << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__instr[1U] 
                                >> 0x12U));
            goto __Vlabel24;
        }
        __Vlabel24: ;
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
            goto __Vlabel27;
        } else if ((1U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout 
                = (0xfU & ((IData)(3U) << (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset)));
            goto __Vlabel27;
        } else if ((2U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout 
                = (0xfU & ((IData)(0xfU) << (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__word_offset)));
            goto __Vlabel27;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout = 0U;
            goto __Vlabel27;
        }
        __Vlabel27: ;
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
                goto __Vlabel29;
            } else if ((1U == (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__width))) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout 
                    = (0xffffU & VL_SHIFTR_III(32,32,32, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__value, 
                                               VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__word_offset), 3U)));
                goto __Vlabel29;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout = 0U;
                goto __Vlabel29;
            }
            __Vlabel29: ;
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
            goto __Vlabel28;
        } else if ((1U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout 
                = ((IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__is_unsigned)
                    ? (0xffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value)
                    : (((- (IData)((1U & (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value)));
            goto __Vlabel28;
        } else if ((2U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__width))) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout 
                = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__value;
            goto __Vlabel28;
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout = 0U;
            goto __Vlabel28;
        }
        __Vlabel28: ;
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

void Vclarvi_sim___024root___nba_sequent__TOP__0(Vclarvi_sim___024root* vlSelf);

void Vclarvi_sim___024root___eval_nba(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclarvi_sim___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclarvi_sim___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vclarvi_sim___024root___timing_resume(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vclarvi_sim___024root___eval_triggers__act(Vclarvi_sim___024root* vlSelf);

bool Vclarvi_sim___024root___eval_phase__act(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vclarvi_sim___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vclarvi_sim___024root___timing_resume(vlSelf);
        Vclarvi_sim___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vclarvi_sim___024root___eval_phase__nba(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vclarvi_sim___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclarvi_sim___024root___dump_triggers__nba(Vclarvi_sim___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclarvi_sim___024root___dump_triggers__act(Vclarvi_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Vclarvi_sim___024root___eval(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vclarvi_sim___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("clarvi_sim.sv", 30, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vclarvi_sim___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("clarvi_sim.sv", 30, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vclarvi_sim___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vclarvi_sim___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vclarvi_sim___024root___eval_debug_assertions(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
