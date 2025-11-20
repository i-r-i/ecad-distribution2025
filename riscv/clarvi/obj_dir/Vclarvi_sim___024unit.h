// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclarvi_sim.h for the primary calling header

#ifndef VERILATED_VCLARVI_SIM___024UNIT_H_
#define VERILATED_VCLARVI_SIM___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vclarvi_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclarvi_sim___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlAssocArray<CData/*4:0*/, std::string> __Venumtab_enum_name0;
    static VlAssocArray<CData/*4:0*/, std::string> __Venumtab_enum_name1;
    static VlAssocArray<SData/*11:0*/, std::string> __Venumtab_enum_name3;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name2;

    // INTERNAL VARIABLES
    Vclarvi_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclarvi_sim___024unit(Vclarvi_sim__Syms* symsp, const char* v__name);
    ~Vclarvi_sim___024unit();
    VL_UNCOPYABLE(Vclarvi_sim___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
