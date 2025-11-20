// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclarvi_sim.h for the primary calling header

#include "Vclarvi_sim__pch.h"
#include "Vclarvi_sim__Syms.h"
#include "Vclarvi_sim___024unit.h"
VlAssocArray<CData/*4:0*/, std::string> Vclarvi_sim___024unit::__Venumtab_enum_name0;
VlAssocArray<CData/*4:0*/, std::string> Vclarvi_sim___024unit::__Venumtab_enum_name1;
VlAssocArray<SData/*11:0*/, std::string> Vclarvi_sim___024unit::__Venumtab_enum_name3;
VlUnpacked<std::string, 4> Vclarvi_sim___024unit::__Venumtab_enum_name2;

void Vclarvi_sim___024unit___ctor_var_reset(Vclarvi_sim___024unit* vlSelf);

Vclarvi_sim___024unit::Vclarvi_sim___024unit(Vclarvi_sim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vclarvi_sim___024unit___ctor_var_reset(this);
}

void Vclarvi_sim___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vclarvi_sim___024unit::~Vclarvi_sim___024unit() {
}
