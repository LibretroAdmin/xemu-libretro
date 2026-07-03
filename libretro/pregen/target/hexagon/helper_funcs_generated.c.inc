void HELPER(J4_hintjumpr)(int32_t RsV)
{
    {fHINTJR(RsV);}
}

int32_t HELPER(L2_loadrub_io)(CPUHexagonState *env, int32_t RsV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fLOAD(1,1,u,EA,RdV); }
    return RdV;
}

int32_t HELPER(L4_loadrub_ur)(CPUHexagonState *env, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RtV,uiV); fLOAD(1,1,u,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_loadrb_io)(CPUHexagonState *env, int32_t RsV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fLOAD(1,1,s,EA,RdV); }
    return RdV;
}

int32_t HELPER(L4_loadrb_ur)(CPUHexagonState *env, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RtV,uiV); fLOAD(1,1,s,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_loadruh_io)(CPUHexagonState *env, int32_t RsV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fLOAD(1,2,u,EA,RdV); }
    return RdV;
}

int32_t HELPER(L4_loadruh_ur)(CPUHexagonState *env, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RtV,uiV); fLOAD(1,2,u,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_loadrh_io)(CPUHexagonState *env, int32_t RsV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fLOAD(1,2,s,EA,RdV); }
    return RdV;
}

int32_t HELPER(L4_loadrh_ur)(CPUHexagonState *env, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RtV,uiV); fLOAD(1,2,s,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_loadri_io)(CPUHexagonState *env, int32_t RsV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fLOAD(1,4,u,EA,RdV); }
    return RdV;
}

int32_t HELPER(L4_loadri_ur)(CPUHexagonState *env, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RtV,uiV); fLOAD(1,4,u,EA,RdV);}
    return RdV;
}

int64_t HELPER(L2_loadrd_io)(CPUHexagonState *env, int32_t RsV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    int64_t RddV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fLOAD(1,8,u,EA,RddV); }
    return RddV;
}

int64_t HELPER(L4_loadrd_ur)(CPUHexagonState *env, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int64_t RddV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RtV,uiV); fLOAD(1,8,u,EA,RddV);}
    return RddV;
}

void HELPER(S2_storerb_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fSTORE(1,1,EA,fGETBYTE(0,RtV)); }
}

int32_t HELPER(S2_storerb_pi)(CPUHexagonState *env, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,RtV)); }
    return RxV;
}

int32_t HELPER(S4_storerb_ap)(CPUHexagonState *env, int32_t RtV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t ReV = 0;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IMM(UiV); fSTORE(1,1,EA,fGETBYTE(0,RtV)); ReV=UiV; }
    return ReV;
}

int32_t HELPER(S2_storerb_pr)(CPUHexagonState *env, int32_t RxV, int32_t MuV, int32_t RtV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_M(RxV,MuV); fSTORE(1,1,EA,fGETBYTE(0,RtV)); }
    return RxV;
}

void HELPER(S4_storerb_ur)(CPUHexagonState *env, int32_t RuV, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RuV,uiV); fSTORE(1,1,EA,fGETBYTE(0,RtV));}
}

void HELPER(S2_storerh_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fSTORE(1,2,EA,fGETHALF(0,RtV)); }
}

int32_t HELPER(S2_storerh_pi)(CPUHexagonState *env, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,RtV)); }
    return RxV;
}

int32_t HELPER(S4_storerh_ap)(CPUHexagonState *env, int32_t RtV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t ReV = 0;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IMM(UiV); fSTORE(1,2,EA,fGETHALF(0,RtV)); ReV=UiV; }
    return ReV;
}

int32_t HELPER(S2_storerh_pr)(CPUHexagonState *env, int32_t RxV, int32_t MuV, int32_t RtV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_M(RxV,MuV); fSTORE(1,2,EA,fGETHALF(0,RtV)); }
    return RxV;
}

void HELPER(S4_storerh_ur)(CPUHexagonState *env, int32_t RuV, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RuV,uiV); fSTORE(1,2,EA,fGETHALF(0,RtV));}
}

void HELPER(S2_storerf_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fSTORE(1,2,EA,fGETHALF(1,RtV)); }
}

int32_t HELPER(S2_storerf_pi)(CPUHexagonState *env, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(1,RtV)); }
    return RxV;
}

int32_t HELPER(S4_storerf_ap)(CPUHexagonState *env, int32_t RtV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t ReV = 0;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IMM(UiV); fSTORE(1,2,EA,fGETHALF(1,RtV)); ReV=UiV; }
    return ReV;
}

int32_t HELPER(S2_storerf_pr)(CPUHexagonState *env, int32_t RxV, int32_t MuV, int32_t RtV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_M(RxV,MuV); fSTORE(1,2,EA,fGETHALF(1,RtV)); }
    return RxV;
}

void HELPER(S4_storerf_ur)(CPUHexagonState *env, int32_t RuV, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RuV,uiV); fSTORE(1,2,EA,fGETHALF(1,RtV));}
}

void HELPER(S2_storeri_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fSTORE(1,4,EA,RtV); }
}

int32_t HELPER(S2_storeri_pi)(CPUHexagonState *env, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_I(RxV,siV); fSTORE(1,4,EA,RtV); }
    return RxV;
}

int32_t HELPER(S4_storeri_ap)(CPUHexagonState *env, int32_t RtV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t ReV = 0;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IMM(UiV); fSTORE(1,4,EA,RtV); ReV=UiV; }
    return ReV;
}

int32_t HELPER(S2_storeri_pr)(CPUHexagonState *env, int32_t RxV, int32_t MuV, int32_t RtV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_M(RxV,MuV); fSTORE(1,4,EA,RtV); }
    return RxV;
}

void HELPER(S4_storeri_ur)(CPUHexagonState *env, int32_t RuV, int32_t RtV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RuV,uiV); fSTORE(1,4,EA,RtV);}
}

void HELPER(S2_storerd_io)(CPUHexagonState *env, int32_t RsV, int64_t RttV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fSTORE(1,8,EA,RttV); }
}

int32_t HELPER(S2_storerd_pi)(CPUHexagonState *env, int32_t RxV, int64_t RttV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_I(RxV,siV); fSTORE(1,8,EA,RttV); }
    return RxV;
}

int32_t HELPER(S4_storerd_ap)(CPUHexagonState *env, int64_t RttV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t ReV = 0;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IMM(UiV); fSTORE(1,8,EA,RttV); ReV=UiV; }
    return ReV;
}

int32_t HELPER(S2_storerd_pr)(CPUHexagonState *env, int32_t RxV, int32_t MuV, int64_t RttV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_M(RxV,MuV); fSTORE(1,8,EA,RttV); }
    return RxV;
}

void HELPER(S4_storerd_ur)(CPUHexagonState *env, int32_t RuV, int64_t RttV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RuV,uiV); fSTORE(1,8,EA,RttV);}
}

void HELPER(S2_storerinew_io)(CPUHexagonState *env, int32_t RsV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fSTORE(1,4,EA,fNEWREG_ST(NtN)); }
}

int32_t HELPER(S2_storerinew_pi)(CPUHexagonState *env, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_I(RxV,siV); fSTORE(1,4,EA,fNEWREG_ST(NtN)); }
    return RxV;
}

int32_t HELPER(S4_storerinew_ap)(CPUHexagonState *env, int32_t NtN, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t ReV = 0;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IMM(UiV); fSTORE(1,4,EA,fNEWREG_ST(NtN)); ReV=UiV; }
    return ReV;
}

int32_t HELPER(S2_storerinew_pr)(CPUHexagonState *env, int32_t RxV, int32_t MuV, int32_t NtN, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_M(RxV,MuV); fSTORE(1,4,EA,fNEWREG_ST(NtN)); }
    return RxV;
}

void HELPER(S4_storerinew_ur)(CPUHexagonState *env, int32_t RuV, int32_t NtN, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RuV,uiV); fSTORE(1,4,EA,fNEWREG_ST(NtN));}
}

void HELPER(S2_storerbnew_io)(CPUHexagonState *env, int32_t RsV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); }
}

int32_t HELPER(S2_storerbnew_pi)(CPUHexagonState *env, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); }
    return RxV;
}

int32_t HELPER(S4_storerbnew_ap)(CPUHexagonState *env, int32_t NtN, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t ReV = 0;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IMM(UiV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); ReV=UiV; }
    return ReV;
}

int32_t HELPER(S2_storerbnew_pr)(CPUHexagonState *env, int32_t RxV, int32_t MuV, int32_t NtN, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_M(RxV,MuV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); }
    return RxV;
}

void HELPER(S4_storerbnew_ur)(CPUHexagonState *env, int32_t RuV, int32_t NtN, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RuV,uiV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN)));}
}

void HELPER(S2_storerhnew_io)(CPUHexagonState *env, int32_t RsV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(siV); fEA_RI(RsV,siV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); }
}

int32_t HELPER(S2_storerhnew_pi)(CPUHexagonState *env, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); }
    return RxV;
}

int32_t HELPER(S4_storerhnew_ap)(CPUHexagonState *env, int32_t NtN, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t ReV = 0;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IMM(UiV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); ReV=UiV; }
    return ReV;
}

int32_t HELPER(S2_storerhnew_pr)(CPUHexagonState *env, int32_t RxV, int32_t MuV, int32_t NtN, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); fPM_M(RxV,MuV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); }
    return RxV;
}

void HELPER(S4_storerhnew_ur)(CPUHexagonState *env, int32_t RuV, int32_t NtN, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(UiV); fEA_IRs(UiV,RuV,uiV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN)));}
}

int32_t HELPER(L4_loadrub_rr)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); fLOAD(1,1,u,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_ploadrubt_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLD(PtV)){fLOAD(1,1,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrubf_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrubtnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEW(PtN)) { fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrubfnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PtN)) { fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrubt_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLD(PvV)){ fLOAD(1,1,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrubf_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLDNOT(PvV)){ fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrubtnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEW(PvN)) { fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrubfnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEWNOT(PvN)) { fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrubt_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLD(PtV)){ fLOAD(1,1,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrubf_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrubtnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEW(PtN)) { fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrubfnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEWNOT(PtN)) { fLOAD(1,1,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_loadrb_rr)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); fLOAD(1,1,s,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_ploadrbt_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLD(PtV)){fLOAD(1,1,s,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrbf_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrbtnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEW(PtN)) { fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrbfnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PtN)) { fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrbt_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLD(PvV)){ fLOAD(1,1,s,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrbf_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLDNOT(PvV)){ fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrbtnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEW(PvN)) { fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrbfnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEWNOT(PvN)) { fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrbt_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLD(PtV)){ fLOAD(1,1,s,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrbf_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrbtnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEW(PtN)) { fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrbfnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEWNOT(PtN)) { fLOAD(1,1,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_loadruh_rr)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); fLOAD(1,2,u,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_ploadruht_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLD(PtV)){fLOAD(1,2,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadruhf_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadruhtnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEW(PtN)) { fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadruhfnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PtN)) { fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadruht_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLD(PvV)){ fLOAD(1,2,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadruhf_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLDNOT(PvV)){ fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadruhtnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEW(PvN)) { fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadruhfnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEWNOT(PvN)) { fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadruht_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLD(PtV)){ fLOAD(1,2,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadruhf_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadruhtnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEW(PtN)) { fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadruhfnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEWNOT(PtN)) { fLOAD(1,2,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_loadrh_rr)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); fLOAD(1,2,s,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_ploadrht_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLD(PtV)){fLOAD(1,2,s,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrhf_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrhtnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEW(PtN)) { fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrhfnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PtN)) { fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrht_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLD(PvV)){ fLOAD(1,2,s,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrhf_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLDNOT(PvV)){ fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrhtnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEW(PvN)) { fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrhfnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEWNOT(PvN)) { fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrht_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLD(PtV)){ fLOAD(1,2,s,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrhf_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrhtnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEW(PtN)) { fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrhfnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEWNOT(PtN)) { fLOAD(1,2,s,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_loadri_rr)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); fLOAD(1,4,u,EA,RdV);}
    return RdV;
}

int32_t HELPER(L2_ploadrit_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLD(PtV)){fLOAD(1,4,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrif_io)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadritnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEW(PtN)) { fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L2_ploadrifnew_io)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PtN)) { fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrit_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLD(PvV)){ fLOAD(1,4,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrif_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLDNOT(PvV)){ fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadritnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEW(PvN)) { fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrifnew_rr)(CPUHexagonState *env, int32_t RdV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEWNOT(PvN)) { fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrit_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLD(PtV)){ fLOAD(1,4,u,EA,RdV);} else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrif_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadritnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEW(PtN)) { fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int32_t HELPER(L4_ploadrifnew_abs)(CPUHexagonState *env, int32_t RdV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEWNOT(PtN)) { fLOAD(1,4,u,EA,RdV); } else {LOAD_CANCEL(EA);}}
    return RdV;
}

int64_t HELPER(L4_loadrd_rr)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int64_t RddV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); fLOAD(1,8,u,EA,RddV);}
    return RddV;
}

int64_t HELPER(L2_ploadrdt_io)(CPUHexagonState *env, int64_t RddV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLD(PtV)){fLOAD(1,8,u,EA,RddV);} else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L2_ploadrdf_io)(CPUHexagonState *env, int64_t RddV, int32_t PtV, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L2_ploadrdtnew_io)(CPUHexagonState *env, int64_t RddV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEW(PtN)) { fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L2_ploadrdfnew_io)(CPUHexagonState *env, int64_t RddV, int32_t PtN, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PtN)) { fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L4_ploadrdt_rr)(CPUHexagonState *env, int64_t RddV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLD(PvV)){ fLOAD(1,8,u,EA,RddV);} else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L4_ploadrdf_rr)(CPUHexagonState *env, int64_t RddV, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if(fLSBOLDNOT(PvV)){ fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L4_ploadrdtnew_rr)(CPUHexagonState *env, int64_t RddV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEW(PvN)) { fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L4_ploadrdfnew_rr)(CPUHexagonState *env, int64_t RddV, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RtV,uiV); if (fLSBNEWNOT(PvN)) { fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L4_ploadrdt_abs)(CPUHexagonState *env, int64_t RddV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLD(PtV)){ fLOAD(1,8,u,EA,RddV);} else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L4_ploadrdf_abs)(CPUHexagonState *env, int64_t RddV, int32_t PtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if(fLSBOLDNOT(PtV)){ fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L4_ploadrdtnew_abs)(CPUHexagonState *env, int64_t RddV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEW(PtN)) { fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

int64_t HELPER(L4_ploadrdfnew_abs)(CPUHexagonState *env, int64_t RddV, int32_t PtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV);if (fLSBNEWNOT(PtN)) { fLOAD(1,8,u,EA,RddV); } else {LOAD_CANCEL(EA);}}
    return RddV;
}

void HELPER(S4_storerb_rr)(CPUHexagonState *env, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); fSTORE(1,1,EA,fGETBYTE(0,RtV));}
}

void HELPER(S2_pstorerbt_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerbt_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLD(PvV)){ fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S2_pstorerbf_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerbf_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLDNOT(PvV)){ fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerbt_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbf_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbtnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbfnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbtnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbfnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerbtnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEW(PvN)){ fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

int32_t HELPER(S2_pstorerbfnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEWNOT(PvN)){ fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerbt_abs)(CPUHexagonState *env, int32_t PvV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if (fLSBOLD(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbf_abs)(CPUHexagonState *env, int32_t PvV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbtnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if ( fLSBNEW(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbfnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storerh_rr)(CPUHexagonState *env, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); fSTORE(1,2,EA,fGETHALF(0,RtV));}
}

void HELPER(S2_pstorerht_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerht_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLD(PvV)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S2_pstorerhf_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerhf_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLDNOT(PvV)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerht_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhf_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhtnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhfnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhtnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhfnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerhtnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEW(PvN)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

int32_t HELPER(S2_pstorerhfnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEWNOT(PvN)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerht_abs)(CPUHexagonState *env, int32_t PvV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhf_abs)(CPUHexagonState *env, int32_t PvV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhtnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhfnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(0,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storerf_rr)(CPUHexagonState *env, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); fSTORE(1,2,EA,fGETHALF(1,RtV));}
}

void HELPER(S2_pstorerft_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerft_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLD(PvV)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(1,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S2_pstorerff_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerff_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLDNOT(PvV)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(1,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerft_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerff_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerftnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerffnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerftnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerffnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerftnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEW(PvN)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(1,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

int32_t HELPER(S2_pstorerffnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEWNOT(PvN)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(1,RtV));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerft_abs)(CPUHexagonState *env, int32_t PvV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerff_abs)(CPUHexagonState *env, int32_t PvV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerftnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerffnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(1,RtV)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeri_rr)(CPUHexagonState *env, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); fSTORE(1,4,EA,RtV);}
}

void HELPER(S2_pstorerit_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerit_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLD(PvV)){ fPM_I(RxV,siV); fSTORE(1,4,EA,RtV);} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S2_pstorerif_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerif_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLDNOT(PvV)){ fPM_I(RxV,siV); fSTORE(1,4,EA,RtV);} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerit_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerif_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstoreritnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerifnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstoreritnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerifnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstoreritnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEW(PvN)){ fPM_I(RxV,siV); fSTORE(1,4,EA,RtV);} else {STORE_CANCEL(EA);}}
    return RxV;
}

int32_t HELPER(S2_pstorerifnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t RtV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEWNOT(PvN)){ fPM_I(RxV,siV); fSTORE(1,4,EA,RtV);} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerit_abs)(CPUHexagonState *env, int32_t PvV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if (fLSBOLD(PvV)){ fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerif_abs)(CPUHexagonState *env, int32_t PvV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstoreritnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if ( fLSBNEW(PvN)) { fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerifnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,4,EA,RtV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storerd_rr)(CPUHexagonState *env, int32_t RsV, int32_t RuV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); fSTORE(1,8,EA,RttV);}
}

void HELPER(S2_pstorerdt_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerdt_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int64_t RttV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLD(PvV)){ fPM_I(RxV,siV); fSTORE(1,8,EA,RttV);} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S2_pstorerdf_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerdf_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int64_t RttV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLDNOT(PvV)){ fPM_I(RxV,siV); fSTORE(1,8,EA,RttV);} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerdt_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerdf_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerdtnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerdfnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerdtnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerdfnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerdtnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int64_t RttV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEW(PvN)){ fPM_I(RxV,siV); fSTORE(1,8,EA,RttV);} else {STORE_CANCEL(EA);}}
    return RxV;
}

int32_t HELPER(S2_pstorerdfnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int64_t RttV, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEWNOT(PvN)){ fPM_I(RxV,siV); fSTORE(1,8,EA,RttV);} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerdt_abs)(CPUHexagonState *env, int32_t PvV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if (fLSBOLD(PvV)){ fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerdf_abs)(CPUHexagonState *env, int32_t PvV, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerdtnew_abs)(CPUHexagonState *env, int32_t PvN, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if ( fLSBNEW(PvN)) { fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerdfnew_abs)(CPUHexagonState *env, int32_t PvN, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,8,EA,RttV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storerinew_rr)(CPUHexagonState *env, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); fSTORE(1,4,EA,fNEWREG_ST(NtN));}
}

void HELPER(S2_pstorerinewt_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerinewt_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLD(PvV)){ fPM_I(RxV,siV); fSTORE(1,4,EA,fNEWREG_ST(NtN));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S2_pstorerinewf_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerinewf_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLDNOT(PvV)){ fPM_I(RxV,siV); fSTORE(1,4,EA,fNEWREG_ST(NtN));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerinewt_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerinewf_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerinewtnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerinewfnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerinewtnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerinewfnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerinewtnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEW(PvN)){ fPM_I(RxV,siV); fSTORE(1,4,EA,fNEWREG_ST(NtN));} else {STORE_CANCEL(EA);}}
    return RxV;
}

int32_t HELPER(S2_pstorerinewfnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEWNOT(PvN)){ fPM_I(RxV,siV); fSTORE(1,4,EA,fNEWREG_ST(NtN));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerinewt_abs)(CPUHexagonState *env, int32_t PvV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if (fLSBOLD(PvV)){ fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerinewf_abs)(CPUHexagonState *env, int32_t PvV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerinewtnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if ( fLSBNEW(PvN)) { fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerinewfnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,4,EA,fNEWREG_ST(NtN)); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storerbnew_rr)(CPUHexagonState *env, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN)));}
}

void HELPER(S2_pstorerbnewt_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerbnewt_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLD(PvV)){ fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN)));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S2_pstorerbnewf_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerbnewf_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLDNOT(PvV)){ fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN)));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerbnewt_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbnewf_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbnewtnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbnewfnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbnewtnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbnewfnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerbnewtnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEW(PvN)){ fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN)));} else {STORE_CANCEL(EA);}}
    return RxV;
}

int32_t HELPER(S2_pstorerbnewfnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEWNOT(PvN)){ fPM_I(RxV,siV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN)));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerbnewt_abs)(CPUHexagonState *env, int32_t PvV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if (fLSBOLD(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbnewf_abs)(CPUHexagonState *env, int32_t PvV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbnewtnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if ( fLSBNEW(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerbnewfnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storerhnew_rr)(CPUHexagonState *env, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN)));}
}

void HELPER(S2_pstorerhnewt_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerhnewt_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLD(PvV)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN)));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S2_pstorerhnewf_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerhnewf_pi)(CPUHexagonState *env, int32_t PvV, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBOLDNOT(PvV)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN)));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerhnewt_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhnewf_rr)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhnewtnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhnewfnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhnewtnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhnewfnew_rr)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t RuV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RRs(RsV,RuV,uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

int32_t HELPER(S2_pstorerhnewtnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEW(PvN)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN)));} else {STORE_CANCEL(EA);}}
    return RxV;
}

int32_t HELPER(S2_pstorerhnewfnew_pi)(CPUHexagonState *env, int32_t PvN, int32_t RxV, int32_t NtN, int32_t siV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_REG(RxV); if (fLSBNEWNOT(PvN)){ fPM_I(RxV,siV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN)));} else {STORE_CANCEL(EA);}}
    return RxV;
}

void HELPER(S4_pstorerhnewt_abs)(CPUHexagonState *env, int32_t PvV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV); fEA_IMM(uiV); if (fLSBOLD(PvV)){ fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhnewf_abs)(CPUHexagonState *env, int32_t PvV, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBOLDNOT(PvV)){ fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhnewtnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if ( fLSBNEW(PvN)) { fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_pstorerhnewfnew_abs)(CPUHexagonState *env, int32_t PvN, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fMUST_IMMEXT(uiV);fEA_IMM(uiV); if (fLSBNEWNOT(PvN)) { fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); } else {STORE_CANCEL(EA);}}
}

void HELPER(L4_add_memopw_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,4,s,EA,tmp); tmp += RtV; fSTORE(1,4,EA,tmp); }
}

void HELPER(L4_add_memopb_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,1,s,EA,tmp); tmp += RtV; fSTORE(1,1,EA,tmp); }
}

void HELPER(L4_add_memoph_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,2,s,EA,tmp); tmp += RtV; fSTORE(1,2,EA,tmp); }
}

void HELPER(L4_sub_memopw_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,4,s,EA,tmp); tmp -= RtV; fSTORE(1,4,EA,tmp); }
}

void HELPER(L4_sub_memopb_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,1,s,EA,tmp); tmp -= RtV; fSTORE(1,1,EA,tmp); }
}

void HELPER(L4_sub_memoph_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,2,s,EA,tmp); tmp -= RtV; fSTORE(1,2,EA,tmp); }
}

void HELPER(L4_and_memopw_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,4,s,EA,tmp); tmp &= RtV; fSTORE(1,4,EA,tmp); }
}

void HELPER(L4_and_memopb_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,1,s,EA,tmp); tmp &= RtV; fSTORE(1,1,EA,tmp); }
}

void HELPER(L4_and_memoph_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,2,s,EA,tmp); tmp &= RtV; fSTORE(1,2,EA,tmp); }
}

void HELPER(L4_or_memopw_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,4,s,EA,tmp); tmp |= RtV; fSTORE(1,4,EA,tmp); }
}

void HELPER(L4_or_memopb_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,1,s,EA,tmp); tmp |= RtV; fSTORE(1,1,EA,tmp); }
}

void HELPER(L4_or_memoph_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,2,s,EA,tmp); tmp |= RtV; fSTORE(1,2,EA,tmp); }
}

void HELPER(L4_iadd_memopw_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,4,s,EA,tmp); tmp += UiV; fSTORE(1,4,EA,tmp); }
}

void HELPER(L4_iadd_memopb_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,1,s,EA,tmp); tmp += UiV; fSTORE(1,1,EA,tmp); }
}

void HELPER(L4_iadd_memoph_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,2,s,EA,tmp); tmp += UiV; fSTORE(1,2,EA,tmp); }
}

void HELPER(L4_isub_memopw_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,4,s,EA,tmp); tmp -= UiV; fSTORE(1,4,EA,tmp); }
}

void HELPER(L4_isub_memopb_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,1,s,EA,tmp); tmp -= UiV; fSTORE(1,1,EA,tmp); }
}

void HELPER(L4_isub_memoph_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,2,s,EA,tmp); tmp -= UiV; fSTORE(1,2,EA,tmp); }
}

void HELPER(L4_iand_memopw_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,4,s,EA,tmp); tmp &= (~(1<<UiV)); fSTORE(1,4,EA,tmp); }
}

void HELPER(L4_iand_memopb_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,1,s,EA,tmp); tmp &= (~(1<<UiV)); fSTORE(1,1,EA,tmp); }
}

void HELPER(L4_iand_memoph_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,2,s,EA,tmp); tmp &= (~(1<<UiV)); fSTORE(1,2,EA,tmp); }
}

void HELPER(L4_ior_memopw_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,4,s,EA,tmp); tmp |= (1<<UiV); fSTORE(1,4,EA,tmp); }
}

void HELPER(L4_ior_memopb_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,1,s,EA,tmp); tmp |= (1<<UiV); fSTORE(1,1,EA,tmp); }
}

void HELPER(L4_ior_memoph_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t UiV, uint32_t slotval)
{
    uint32_t EA;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_RI(RsV,uiV); fHIDE(size4s_t tmp;) fLOAD(1,2,s,EA,tmp); tmp |= (1<<UiV); fSTORE(1,2,EA,tmp); }
}

void HELPER(S4_storeirbt_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fIMMEXT(SiV); fSTORE(1,1,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirbf_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fIMMEXT(SiV); fSTORE(1,1,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirbtnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBNEW(PvN)){ fIMMEXT(SiV); fSTORE(1,1,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirbfnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)){ fIMMEXT(SiV); fSTORE(1,1,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirht_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fIMMEXT(SiV); fSTORE(1,2,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirhf_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fIMMEXT(SiV); fSTORE(1,2,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirhtnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBNEW(PvN)){ fIMMEXT(SiV); fSTORE(1,2,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirhfnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)){ fIMMEXT(SiV); fSTORE(1,2,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirit_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBOLD(PvV)){ fIMMEXT(SiV); fSTORE(1,4,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirif_io)(CPUHexagonState *env, int32_t PvV, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBOLDNOT(PvV)){ fIMMEXT(SiV); fSTORE(1,4,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeiritnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBNEW(PvN)){ fIMMEXT(SiV); fSTORE(1,4,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirifnew_io)(CPUHexagonState *env, int32_t PvN, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); if (fLSBNEWNOT(PvN)){ fIMMEXT(SiV); fSTORE(1,4,EA,SiV); } else {STORE_CANCEL(EA);}}
}

void HELPER(S4_storeirb_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fIMMEXT(SiV); fSTORE(1,1,EA,SiV); }
}

void HELPER(S4_storeirh_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fIMMEXT(SiV); fSTORE(1,2,EA,SiV); }
}

void HELPER(S4_storeiri_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, int32_t SiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fIMMEXT(SiV); fSTORE(1,4,EA,SiV); }
}

int32_t HELPER(L2_loadrubgp)(CPUHexagonState *env, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fLOAD(1,1,u,EA,RdV); }
    return RdV;
}

int32_t HELPER(L2_loadrbgp)(CPUHexagonState *env, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fLOAD(1,1,s,EA,RdV); }
    return RdV;
}

int32_t HELPER(L2_loadruhgp)(CPUHexagonState *env, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fLOAD(1,2,u,EA,RdV); }
    return RdV;
}

int32_t HELPER(L2_loadrhgp)(CPUHexagonState *env, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fLOAD(1,2,s,EA,RdV); }
    return RdV;
}

int32_t HELPER(L2_loadrigp)(CPUHexagonState *env, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fLOAD(1,4,u,EA,RdV); }
    return RdV;
}

int64_t HELPER(L2_loadrdgp)(CPUHexagonState *env, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int64_t RddV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fLOAD(1,8,u,EA,RddV); }
    return RddV;
}

void HELPER(S2_storerbgp)(CPUHexagonState *env, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fSTORE(1,1,EA,fGETBYTE(0,RtV)); }
}

void HELPER(S2_storerhgp)(CPUHexagonState *env, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fSTORE(1,2,EA,fGETHALF(0,RtV)); }
}

void HELPER(S2_storerfgp)(CPUHexagonState *env, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fSTORE(1,2,EA,fGETHALF(1,RtV)); }
}

void HELPER(S2_storerigp)(CPUHexagonState *env, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fSTORE(1,4,EA,RtV); }
}

void HELPER(S2_storerdgp)(CPUHexagonState *env, int64_t RttV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fSTORE(1,8,EA,RttV); }
}

void HELPER(S2_storerinewgp)(CPUHexagonState *env, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fSTORE(1,4,EA,fNEWREG_ST(NtN)); }
}

void HELPER(S2_storerbnewgp)(CPUHexagonState *env, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fSTORE(1,1,EA,fGETBYTE(0,fNEWREG_ST(NtN))); }
}

void HELPER(S2_storerhnewgp)(CPUHexagonState *env, int32_t NtN, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fIMMEXT(uiV); fEA_GPI(uiV); fSTORE(1,2,EA,fGETHALF(0,fNEWREG_ST(NtN))); }
}

int32_t HELPER(C2_cmpeq)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(RsV==RtV);}
    return PdV;
}

int32_t HELPER(C2_cmpgt)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(RsV>RtV);}
    return PdV;
}

int32_t HELPER(C2_cmpgtu)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(fCAST4u(RsV)>fCAST4u(RtV));}
    return PdV;
}

int32_t HELPER(C2_cmpeqp)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(RssV==RttV);}
    return PdV;
}

int32_t HELPER(C2_cmpgtp)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(RssV>RttV);}
    return PdV;
}

int32_t HELPER(C2_cmpgtup)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(fCAST8u(RssV)>fCAST8u(RttV));}
    return PdV;
}

int32_t HELPER(A4_rcmpeqi)(int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    {fIMMEXT(siV); RdV=(RsV==siV); }
    return RdV;
}

int32_t HELPER(A4_rcmpneqi)(int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    {fIMMEXT(siV); RdV=(RsV!=siV); }
    return RdV;
}

int32_t HELPER(A4_rcmpeq)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=(RsV==RtV); }
    return RdV;
}

int32_t HELPER(A4_rcmpneq)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=(RsV!=RtV); }
    return RdV;
}

int32_t HELPER(C2_bitsset)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF((RsV&RtV)==RtV);}
    return PdV;
}

int32_t HELPER(C2_bitsclr)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF((RsV&RtV)==0);}
    return PdV;
}

int32_t HELPER(C4_nbitsset)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF((RsV&RtV)!=RtV);}
    return PdV;
}

int32_t HELPER(C4_nbitsclr)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF((RsV&RtV)!=0);}
    return PdV;
}

int32_t HELPER(C2_cmpeqi)(int32_t RsV, int32_t siV)
{
    int32_t PdV = 0;
    {fIMMEXT(siV); PdV=f8BITSOF(RsV==siV);}
    return PdV;
}

int32_t HELPER(C2_cmpgti)(int32_t RsV, int32_t siV)
{
    int32_t PdV = 0;
    {fIMMEXT(siV); PdV=f8BITSOF(RsV>siV);}
    return PdV;
}

int32_t HELPER(C2_cmpgtui)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    {fIMMEXT(uiV); PdV=f8BITSOF(fCAST4u(RsV)>fCAST4u(uiV));}
    return PdV;
}

int32_t HELPER(C2_bitsclri)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF((RsV&uiV)==0);}
    return PdV;
}

int32_t HELPER(C4_nbitsclri)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF((RsV&uiV)!=0);}
    return PdV;
}

int32_t HELPER(C4_cmpneqi)(int32_t RsV, int32_t siV)
{
    int32_t PdV = 0;
    {fIMMEXT(siV); PdV=f8BITSOF(RsV!=siV);}
    return PdV;
}

int32_t HELPER(C4_cmpltei)(int32_t RsV, int32_t siV)
{
    int32_t PdV = 0;
    {fIMMEXT(siV); PdV=f8BITSOF(RsV<=siV);}
    return PdV;
}

int32_t HELPER(C4_cmplteui)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    {fIMMEXT(uiV); PdV=f8BITSOF(fCAST4u(RsV)<=fCAST4u(uiV));}
    return PdV;
}

int32_t HELPER(C4_cmpneq)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(RsV!=RtV);}
    return PdV;
}

int32_t HELPER(C4_cmplte)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(RsV<=RtV);}
    return PdV;
}

int32_t HELPER(C4_cmplteu)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    {PdV=f8BITSOF(fCAST4u(RsV)<=fCAST4u(RtV));}
    return PdV;
}

int32_t HELPER(C2_and)(int32_t PtV, int32_t PsV)
{
    int32_t PdV = 0;
    {PdV=PsV & PtV;}
    return PdV;
}

int32_t HELPER(C2_or)(int32_t PtV, int32_t PsV)
{
    int32_t PdV = 0;
    {PdV=PsV | PtV;}
    return PdV;
}

int32_t HELPER(C2_xor)(int32_t PsV, int32_t PtV)
{
    int32_t PdV = 0;
    {PdV=PsV ^ PtV;}
    return PdV;
}

int32_t HELPER(C2_andn)(int32_t PtV, int32_t PsV)
{
    int32_t PdV = 0;
    {PdV=PtV & (~PsV);}
    return PdV;
}

int32_t HELPER(C2_not)(int32_t PsV)
{
    int32_t PdV = 0;
    {PdV=~PsV;}
    return PdV;
}

int32_t HELPER(C2_orn)(int32_t PtV, int32_t PsV)
{
    int32_t PdV = 0;
    {PdV=PtV | (~PsV);}
    return PdV;
}

int32_t HELPER(C4_and_and)(int32_t PsV, int32_t PtV, int32_t PuV)
{
    int32_t PdV = 0;
    { PdV = PsV & PtV & PuV; }
    return PdV;
}

int32_t HELPER(C4_and_or)(int32_t PsV, int32_t PtV, int32_t PuV)
{
    int32_t PdV = 0;
    { PdV = PsV & (PtV | PuV); }
    return PdV;
}

int32_t HELPER(C4_or_and)(int32_t PsV, int32_t PtV, int32_t PuV)
{
    int32_t PdV = 0;
    { PdV = PsV | (PtV & PuV); }
    return PdV;
}

int32_t HELPER(C4_or_or)(int32_t PsV, int32_t PtV, int32_t PuV)
{
    int32_t PdV = 0;
    { PdV = PsV | PtV | PuV; }
    return PdV;
}

int32_t HELPER(C4_and_andn)(int32_t PsV, int32_t PtV, int32_t PuV)
{
    int32_t PdV = 0;
    { PdV = PsV & PtV & (~PuV); }
    return PdV;
}

int32_t HELPER(C4_and_orn)(int32_t PsV, int32_t PtV, int32_t PuV)
{
    int32_t PdV = 0;
    { PdV = PsV & (PtV | (~PuV)); }
    return PdV;
}

int32_t HELPER(C4_or_andn)(int32_t PsV, int32_t PtV, int32_t PuV)
{
    int32_t PdV = 0;
    { PdV = PsV | (PtV & (~PuV)); }
    return PdV;
}

int32_t HELPER(C4_or_orn)(int32_t PsV, int32_t PtV, int32_t PuV)
{
    int32_t PdV = 0;
    { PdV = PsV | PtV | (~PuV); }
    return PdV;
}

int32_t HELPER(C2_any8)(int32_t PsV)
{
    int32_t PdV = 0;
    { PdV = (PsV ? 0xff : 0x00); }
    return PdV;
}

int32_t HELPER(C2_all8)(int32_t PsV)
{
    int32_t PdV = 0;
    { PdV = (PsV == 0xff ? 0xff : 0x00); }
    return PdV;
}

int32_t HELPER(C2_vitpack)(int32_t PsV, int32_t PtV)
{
    int32_t RdV = 0;
    { RdV = (PsV&0x55) | (PtV&0xAA); }
    return RdV;
}

int32_t HELPER(C2_mux)(int32_t PuV, int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV = (fLSBOLD(PuV) ? RsV : RtV); }
    return RdV;
}

int32_t HELPER(C2_cmovenewit)(int32_t RdV, int32_t PuN, int32_t siV)
{
    { fIMMEXT(siV); if (fLSBNEW(PuN)) RdV=siV; else CANCEL;}
    return RdV;
}

int32_t HELPER(C2_cmovenewif)(int32_t RdV, int32_t PuN, int32_t siV)
{
    { fIMMEXT(siV); if (fLSBNEWNOT(PuN)) RdV=siV; else CANCEL;}
    return RdV;
}

int32_t HELPER(C2_cmoveit)(int32_t RdV, int32_t PuV, int32_t siV)
{
    { fIMMEXT(siV); if (fLSBOLD(PuV)) RdV=siV; else CANCEL;}
    return RdV;
}

int32_t HELPER(C2_cmoveif)(int32_t RdV, int32_t PuV, int32_t siV)
{
    { fIMMEXT(siV); if (fLSBOLDNOT(PuV)) RdV=siV; else CANCEL;}
    return RdV;
}

int64_t HELPER(C2_ccombinewnewt)(int64_t RddV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    { if (fLSBNEW(PuN)) { fSETWORD(0,RddV,RtV); fSETWORD(1,RddV,RsV); } else {CANCEL;} }
    return RddV;
}

int64_t HELPER(C2_ccombinewnewf)(int64_t RddV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    { if (fLSBNEWNOT(PuN)) { fSETWORD(0,RddV,RtV); fSETWORD(1,RddV,RsV); } else {CANCEL;} }
    return RddV;
}

int64_t HELPER(C2_ccombinewt)(int64_t RddV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    { if (fLSBOLD(PuV)) { fSETWORD(0,RddV,RtV); fSETWORD(1,RddV,RsV); } else {CANCEL;} }
    return RddV;
}

int64_t HELPER(C2_ccombinewf)(int64_t RddV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    { if (fLSBOLDNOT(PuV)) { fSETWORD(0,RddV,RtV); fSETWORD(1,RddV,RsV); } else {CANCEL;} }
    return RddV;
}

int32_t HELPER(C2_muxii)(int32_t PuV, int32_t siV, int32_t SiV)
{
    int32_t RdV = 0;
    { fIMMEXT(siV); RdV = (fLSBOLD(PuV) ? siV : SiV); }
    return RdV;
}

int32_t HELPER(C2_muxir)(int32_t PuV, int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    { fIMMEXT(siV); RdV = (fLSBOLD(PuV) ? RsV : siV); }
    return RdV;
}

int32_t HELPER(C2_muxri)(int32_t PuV, int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    { fIMMEXT(siV); RdV = (fLSBOLD(PuV) ? siV : RsV); }
    return RdV;
}

int64_t HELPER(C2_vmux)(int32_t PuV, int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,(fGETBIT(i,PuV)?(fGETBYTE(i,RssV)):(fGETBYTE(i,RttV)))); } }
    return RddV;
}

int64_t HELPER(C2_mask)(int32_t PtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,(fGETBIT(i,PtV)?(0xff):(0x00))); } }
    return RddV;
}

int32_t HELPER(A2_vcmpbeq)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBIT(i,PdV,(fGETBYTE(i,RssV) == fGETBYTE(i,RttV))); } }
    return PdV;
}

int32_t HELPER(A4_vcmpbeqi)(int64_t RssV, int32_t uiV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBIT(i,PdV,(fGETUBYTE(i,RssV) == uiV)); } }
    return PdV;
}

int32_t HELPER(A4_vcmpbeq_any)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) PdV = 0; for (i = 0; i < 8; i++) { if (fGETBYTE(i,RssV) == fGETBYTE(i,RttV)) PdV = 0xff; } }
    return PdV;
}

int32_t HELPER(A6_vcmpbeq_notany)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) PdV = 0; for (i = 0; i < 8; i++) { if (fGETBYTE(i,RssV) == fGETBYTE(i,RttV)) PdV = 0xff; } PdV = ~PdV; }
    return PdV;
}

int32_t HELPER(A2_vcmpbgtu)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBIT(i,PdV,(fGETUBYTE(i,RssV) > fGETUBYTE(i,RttV))); } }
    return PdV;
}

int32_t HELPER(A4_vcmpbgtui)(int64_t RssV, int32_t uiV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBIT(i,PdV,(fGETUBYTE(i,RssV) > uiV)); } }
    return PdV;
}

int32_t HELPER(A4_vcmpbgt)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBIT(i,PdV,(fGETBYTE(i,RssV) > fGETBYTE(i,RttV))); } }
    return PdV;
}

int32_t HELPER(A4_vcmpbgti)(int64_t RssV, int32_t siV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBIT(i,PdV,(fGETBYTE(i,RssV) > siV)); } }
    return PdV;
}

int32_t HELPER(A4_cmpbeq)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    { PdV=f8BITSOF(fGETBYTE(0,RsV) == fGETBYTE(0,RtV)); }
    return PdV;
}

int32_t HELPER(A4_cmpbeqi)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    { PdV=f8BITSOF(fGETUBYTE(0,RsV) == uiV); }
    return PdV;
}

int32_t HELPER(A4_cmpbgtu)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    { PdV=f8BITSOF(fGETUBYTE(0,RsV) > fGETUBYTE(0,RtV)); }
    return PdV;
}

int32_t HELPER(A4_cmpbgtui)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    { fIMMEXT(uiV); PdV=f8BITSOF(fGETUBYTE(0,RsV) > fCAST4u(uiV)); }
    return PdV;
}

int32_t HELPER(A4_cmpbgt)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    { PdV=f8BITSOF(fGETBYTE(0,RsV) > fGETBYTE(0,RtV)); }
    return PdV;
}

int32_t HELPER(A4_cmpbgti)(int32_t RsV, int32_t siV)
{
    int32_t PdV = 0;
    { PdV=f8BITSOF(fGETBYTE(0,RsV) > siV); }
    return PdV;
}

int32_t HELPER(A2_vcmpheq)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETBIT(i*2,PdV, (fGETHALF(i,RssV) == fGETHALF(i,RttV))); fSETBIT(i*2+1,PdV,(fGETHALF(i,RssV) == fGETHALF(i,RttV))); } }
    return PdV;
}

int32_t HELPER(A2_vcmphgt)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETBIT(i*2, PdV, (fGETHALF(i,RssV) > fGETHALF(i,RttV))); fSETBIT(i*2+1,PdV, (fGETHALF(i,RssV) > fGETHALF(i,RttV))); } }
    return PdV;
}

int32_t HELPER(A2_vcmphgtu)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETBIT(i*2, PdV, (fGETUHALF(i,RssV) > fGETUHALF(i,RttV))); fSETBIT(i*2+1,PdV, (fGETUHALF(i,RssV) > fGETUHALF(i,RttV))); } }
    return PdV;
}

int32_t HELPER(A4_vcmpheqi)(int64_t RssV, int32_t siV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETBIT(i*2,PdV, (fGETHALF(i,RssV) == siV)); fSETBIT(i*2+1,PdV,(fGETHALF(i,RssV) == siV)); } }
    return PdV;
}

int32_t HELPER(A4_vcmphgti)(int64_t RssV, int32_t siV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETBIT(i*2, PdV, (fGETHALF(i,RssV) > siV)); fSETBIT(i*2+1,PdV, (fGETHALF(i,RssV) > siV)); } }
    return PdV;
}

int32_t HELPER(A4_vcmphgtui)(int64_t RssV, int32_t uiV)
{
    int32_t PdV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETBIT(i*2, PdV, (fGETUHALF(i,RssV) > uiV)); fSETBIT(i*2+1,PdV, (fGETUHALF(i,RssV) > uiV)); } }
    return PdV;
}

int32_t HELPER(A4_cmpheq)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    { PdV=f8BITSOF(fGETHALF(0,RsV) == fGETHALF(0,RtV)); }
    return PdV;
}

int32_t HELPER(A4_cmphgt)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    { PdV=f8BITSOF(fGETHALF(0,RsV) > fGETHALF(0,RtV)); }
    return PdV;
}

int32_t HELPER(A4_cmphgtu)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    { PdV=f8BITSOF(fGETUHALF(0,RsV) > fGETUHALF(0,RtV)); }
    return PdV;
}

int32_t HELPER(A4_cmpheqi)(int32_t RsV, int32_t siV)
{
    int32_t PdV = 0;
    { fIMMEXT(siV); PdV=f8BITSOF(fGETHALF(0,RsV) == siV); }
    return PdV;
}

int32_t HELPER(A4_cmphgti)(int32_t RsV, int32_t siV)
{
    int32_t PdV = 0;
    { fIMMEXT(siV); PdV=f8BITSOF(fGETHALF(0,RsV) > siV); }
    return PdV;
}

int32_t HELPER(A4_cmphgtui)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    { fIMMEXT(uiV); PdV=f8BITSOF(fGETUHALF(0,RsV) > fCAST4u(uiV)); }
    return PdV;
}

int32_t HELPER(A2_vcmpweq)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fSETBITS(3,0,PdV,(fGETWORD(0,RssV)==fGETWORD(0,RttV))); fSETBITS(7,4,PdV,(fGETWORD(1,RssV)==fGETWORD(1,RttV))); }
    return PdV;
}

int32_t HELPER(A2_vcmpwgt)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fSETBITS(3,0,PdV,(fGETWORD(0,RssV)>fGETWORD(0,RttV))); fSETBITS(7,4,PdV,(fGETWORD(1,RssV)>fGETWORD(1,RttV))); }
    return PdV;
}

int32_t HELPER(A2_vcmpwgtu)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fSETBITS(3,0,PdV,(fGETUWORD(0,RssV)>fGETUWORD(0,RttV))); fSETBITS(7,4,PdV,(fGETUWORD(1,RssV)>fGETUWORD(1,RttV))); }
    return PdV;
}

int32_t HELPER(A4_vcmpweqi)(int64_t RssV, int32_t siV)
{
    int32_t PdV = 0;
    { fSETBITS(3,0,PdV,(fGETWORD(0,RssV)==siV)); fSETBITS(7,4,PdV,(fGETWORD(1,RssV)==siV)); }
    return PdV;
}

int32_t HELPER(A4_vcmpwgti)(int64_t RssV, int32_t siV)
{
    int32_t PdV = 0;
    { fSETBITS(3,0,PdV,(fGETWORD(0,RssV)>siV)); fSETBITS(7,4,PdV,(fGETWORD(1,RssV)>siV)); }
    return PdV;
}

int32_t HELPER(A4_vcmpwgtui)(int64_t RssV, int32_t uiV)
{
    int32_t PdV = 0;
    { fSETBITS(3,0,PdV,(fGETUWORD(0,RssV)>fCAST4u(uiV))); fSETBITS(7,4,PdV,(fGETUWORD(1,RssV)>fCAST4u(uiV))); }
    return PdV;
}

int32_t HELPER(A4_boundscheck_hi)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(size4u_t src;) src = fGETUWORD(1,RssV); PdV = f8BITSOF((fCAST4u(src) >= fGETUWORD(0,RttV)) && (fCAST4u(src) < fGETUWORD(1,RttV))); }
    return PdV;
}

int32_t HELPER(A4_boundscheck_lo)(int64_t RssV, int64_t RttV)
{
    int32_t PdV = 0;
    { fHIDE(size4u_t src;) src = fGETUWORD(0,RssV); PdV = f8BITSOF((fCAST4u(src) >= fGETUWORD(0,RttV)) && (fCAST4u(src) < fGETUWORD(1,RttV))); }
    return PdV;
}

int32_t HELPER(A4_tlbmatch)(int64_t RssV, int32_t RtV)
{
    int32_t PdV = 0;
    { fHIDE(size4u_t TLBHI; size4u_t TLBLO; size4u_t MASK; size4u_t SIZE;) MASK = 0x07ffffff; TLBLO = fGETUWORD(0,RssV); TLBHI = fGETUWORD(1,RssV); SIZE = fMIN(6,fCL1_4(~fBREV_4(TLBLO))); MASK &= (0xffffffff << 2*SIZE); PdV = f8BITSOF(fGETBIT(31,TLBHI) && ((TLBHI & MASK) == (RtV & MASK))); }
    return PdV;
}

int32_t HELPER(C2_tfrpr)(int32_t PsV)
{
    int32_t RdV = 0;
    { RdV = fZXTN(8,32,PsV); }
    return RdV;
}

int32_t HELPER(C2_tfrrp)(int32_t RsV)
{
    int32_t PdV = 0;
    { PdV = fGETUBYTE(0,RsV); }
    return PdV;
}

int32_t HELPER(C4_fastcorner9)(int32_t PsV, int32_t PtV)
{
    int32_t PdV = 0;
    { fHIDE(size4u_t tmp = 0; size4u_t i;) fSETHALF(0,tmp,(PsV<<8)|PtV); fSETHALF(1,tmp,(PsV<<8)|PtV); for (i = 1; i < 9; i++) { tmp &= tmp >> 1; } PdV = f8BITSOF(tmp != 0); }
    return PdV;
}

int32_t HELPER(C4_fastcorner9_not)(int32_t PsV, int32_t PtV)
{
    int32_t PdV = 0;
    { fHIDE(size4u_t tmp = 0; size4u_t i;) fSETHALF(0,tmp,(PsV<<8)|PtV); fSETHALF(1,tmp,(PsV<<8)|PtV); for (i = 1; i < 9; i++) { tmp &= tmp >> 1; } PdV = f8BITSOF(tmp == 0); }
    return PdV;
}

int32_t HELPER(M2_mpy_acc_hh_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_hh_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_hl_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_hl_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_lh_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_lh_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_ll_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_ll_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_hh_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_hh_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_hl_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_hl_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_lh_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_lh_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_ll_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_ll_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_sat_hh_s0)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV+ fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_sat_hh_s1)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV+ fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_sat_hl_s0)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV+ fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_sat_hl_s1)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV+ fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_sat_lh_s0)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV+ fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_sat_lh_s1)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV+ fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_sat_ll_s0)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV+ fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_acc_sat_ll_s1)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV+ fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_sat_hh_s0)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV- fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_sat_hh_s1)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV- fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_sat_hl_s0)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV- fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_sat_hl_s1)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV- fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_sat_lh_s0)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV- fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_sat_lh_s1)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV- fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_sat_ll_s0)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV- fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpy_nac_sat_ll_s1)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT(fPASS(RxV- fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpy_hh_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_hh_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_hl_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_hl_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_lh_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_lh_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_ll_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_ll_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_hh_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fPASS( fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_hh_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fPASS( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_hl_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fPASS( fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_hl_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fPASS( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_lh_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fPASS( fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_lh_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fPASS( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_ll_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fPASS( fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_ll_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fPASS( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_rnd_hh_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fROUND( fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_rnd_hh_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fROUND( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_rnd_hl_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fROUND( fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_rnd_hl_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fROUND( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_rnd_lh_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fROUND( fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_rnd_lh_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fROUND( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_rnd_ll_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fROUND( fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_rnd_ll_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fROUND( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_rnd_hh_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fROUND( fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_rnd_hh_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fROUND( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_rnd_hl_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fROUND( fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_rnd_hl_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fROUND( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_rnd_lh_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fROUND( fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_rnd_lh_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fROUND( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_rnd_ll_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fROUND( fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpy_sat_rnd_ll_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fROUND( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RdV;
}

int64_t HELPER(M2_mpyd_acc_hh_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_acc_hh_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_acc_hl_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_acc_hl_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_acc_lh_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_acc_lh_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_acc_ll_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_acc_ll_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_nac_hh_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_nac_hh_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_nac_hl_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_nac_hl_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_nac_lh_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_nac_lh_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_nac_ll_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_nac_ll_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyd_hh_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_hh_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_hl_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_hl_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_lh_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_lh_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_ll_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_ll_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_rnd_hh_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fROUND( fMPY16SS( fGETHALF(1,RsV),fGETHALF(1,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_rnd_hh_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fROUND( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_rnd_hl_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fROUND( fMPY16SS( fGETHALF(1,RsV),fGETHALF(0,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_rnd_hl_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fROUND( fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_rnd_lh_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fROUND( fMPY16SS( fGETHALF(0,RsV),fGETHALF(1,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_rnd_lh_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fROUND( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_rnd_ll_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fROUND( fMPY16SS( fGETHALF(0,RsV),fGETHALF(0,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyd_rnd_ll_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fROUND( fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)))));}
    return RddV;
}

int32_t HELPER(M2_mpyu_acc_hh_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_acc_hh_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_acc_hl_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_acc_hl_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_acc_lh_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_acc_lh_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_acc_ll_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_acc_ll_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV+ fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_nac_hh_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_nac_hh_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_nac_hl_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_nac_hl_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_nac_lh_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(1,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_nac_lh_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(1,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_nac_ll_s0)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(0,RtV))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_nac_ll_s1)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    {RxV=fPASS(fPASS(RxV- fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(0,RtV)))));}
    return RxV;
}

int32_t HELPER(M2_mpyu_hh_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpyu_hh_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpyu_hl_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpyu_hl_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(0,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpyu_lh_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(1,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpyu_lh_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(1,RtV)))));}
    return RdV;
}

int32_t HELPER(M2_mpyu_ll_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(0,RtV))));}
    return RdV;
}

int32_t HELPER(M2_mpyu_ll_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fPASS(fPASS( fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(0,RtV)))));}
    return RdV;
}

int64_t HELPER(M2_mpyud_acc_hh_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(1,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_acc_hh_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_acc_hl_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(0,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_acc_hl_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(0,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_acc_lh_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(1,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_acc_lh_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_acc_ll_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(0,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_acc_ll_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV+ fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(0,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_nac_hh_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(1,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_nac_hh_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_nac_hl_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(0,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_nac_hl_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(0,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_nac_lh_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(1,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_nac_lh_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_nac_ll_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(0,RtV))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_nac_ll_s1)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV=fPASS(fPASS(RxxV- fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(0,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_mpyud_hh_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(1,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyud_hh_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyud_hl_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fMPY16UU( fGETUHALF(1,RsV),fGETUHALF(0,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyud_hl_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fSCALE(1,fMPY16UU(fGETUHALF(1,RsV),fGETUHALF(0,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyud_lh_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(1,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyud_lh_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_mpyud_ll_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fMPY16UU( fGETUHALF(0,RsV),fGETUHALF(0,RtV))));}
    return RddV;
}

int64_t HELPER(M2_mpyud_ll_s1)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fPASS(fPASS( fSCALE(1,fMPY16UU(fGETUHALF(0,RsV),fGETUHALF(0,RtV)))));}
    return RddV;
}

int32_t HELPER(M2_mpysip)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { fIMMEXT(uiV); RdV=RsV*uiV; }
    return RdV;
}

int32_t HELPER(M2_mpysin)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV=RsV*-uiV; }
    return RdV;
}

int32_t HELPER(M2_macsip)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { fIMMEXT(uiV); RxV=RxV + (RsV*uiV);}
    return RxV;
}

int32_t HELPER(M2_macsin)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { fIMMEXT(uiV); RxV=RxV - (RsV*uiV);}
    return RxV;
}

int64_t HELPER(M2_dpmpyss_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fMPY32SS(RsV,RtV);}
    return RddV;
}

int64_t HELPER(M2_dpmpyss_acc_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV= RxxV + fMPY32SS(RsV,RtV);}
    return RxxV;
}

int64_t HELPER(M2_dpmpyss_nac_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV= RxxV - fMPY32SS(RsV,RtV);}
    return RxxV;
}

int64_t HELPER(M2_dpmpyuu_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    {RddV=fMPY32UU(fCAST4u(RsV),fCAST4u(RtV));}
    return RddV;
}

int64_t HELPER(M2_dpmpyuu_acc_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV= RxxV + fMPY32UU(fCAST4u(RsV),fCAST4u(RtV));}
    return RxxV;
}

int64_t HELPER(M2_dpmpyuu_nac_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    {RxxV= RxxV - fMPY32UU(fCAST4u(RsV),fCAST4u(RtV));}
    return RxxV;
}

int32_t HELPER(M2_mpy_up)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fMPY32SS(RsV,RtV)>>32;}
    return RdV;
}

int32_t HELPER(M2_mpy_up_s1)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fMPY32SS(RsV,RtV)>>31;}
    return RdV;
}

int32_t HELPER(M2_mpy_up_s1_sat)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSAT(fMPY32SS(RsV,RtV)>>31);}
    return RdV;
}

int32_t HELPER(M2_mpyu_up)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fMPY32UU(fCAST4u(RsV),fCAST4u(RtV))>>32;}
    return RdV;
}

int32_t HELPER(M2_mpysu_up)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=fMPY32SU(RsV,fCAST4u(RtV))>>32;}
    return RdV;
}

int32_t HELPER(M2_dpmpyss_rnd_s0)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV=(fMPY32SS(RsV,RtV)+fCONSTLL(0x80000000))>>32;}
    return RdV;
}

int32_t HELPER(M4_mac_up_s1_sat)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT( (fSE32_64(RxV)) + (fMPY32SS(RsV,RtV)>>31));}
    return RxV;
}

int32_t HELPER(M4_nac_up_s1_sat)(CPUHexagonState *env, int32_t RxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    {RxV=fSAT( (fSE32_64(RxV)) - (fMPY32SS(RsV,RtV)>>31));}
    return RxV;
}

int32_t HELPER(M2_mpyi)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV=RsV*RtV;}
    return RdV;
}

int32_t HELPER(M2_maci)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV=RxV + RsV*RtV;}
    return RxV;
}

int32_t HELPER(M2_mnaci)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV=RxV - RsV*RtV;}
    return RxV;
}

int32_t HELPER(M2_acci)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV=RxV + RsV + RtV;}
    return RxV;
}

int32_t HELPER(M2_accii)(int32_t RxV, int32_t RsV, int32_t siV)
{
    { fIMMEXT(siV); RxV=RxV + RsV + siV;}
    return RxV;
}

int32_t HELPER(M2_nacci)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV=RxV - (RsV + RtV);}
    return RxV;
}

int32_t HELPER(M2_naccii)(int32_t RxV, int32_t RsV, int32_t siV)
{
    { fIMMEXT(siV); RxV=RxV - (RsV + siV);}
    return RxV;
}

int32_t HELPER(M2_subacc)(int32_t RxV, int32_t RtV, int32_t RsV)
{
    { RxV=RxV + RtV - RsV;}
    return RxV;
}

int32_t HELPER(M4_mpyrr_addr)(int32_t RyV, int32_t RuV, int32_t RsV)
{
    { RyV = RuV + RsV*RyV;}
    return RyV;
}

int32_t HELPER(M4_mpyri_addr_u2)(int32_t RuV, int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = RuV + RsV*uiV;}
    return RdV;
}

int32_t HELPER(M4_mpyri_addr)(int32_t RuV, int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { fIMMEXT(uiV); RdV = RuV + RsV*uiV;}
    return RdV;
}

int32_t HELPER(M4_mpyri_addi)(int32_t RsV, int32_t uiV, int32_t UiV)
{
    int32_t RdV = 0;
    { fIMMEXT(uiV); RdV = uiV + RsV*UiV;}
    return RdV;
}

int32_t HELPER(M4_mpyrr_addi)(int32_t RsV, int32_t RtV, int32_t uiV)
{
    int32_t RdV = 0;
    { fIMMEXT(uiV); RdV = uiV + RsV*RtV;}
    return RdV;
}

int64_t HELPER(M2_vmpy2s_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))))); fSETWORD(1,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_vmpy2s_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))))); fSETWORD(1,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_vmac2s_s0)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_vmac2s_s1)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_vmpy2su_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fSCALE(0,fMPY16SU(fGETHALF(0,RsV),fGETUHALF(0,RtV))))); fSETWORD(1,RddV,fSAT(fSCALE(0,fMPY16SU(fGETHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_vmpy2su_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fSCALE(1,fMPY16SU(fGETHALF(0,RsV),fGETUHALF(0,RtV))))); fSETWORD(1,RddV,fSAT(fSCALE(1,fMPY16SU(fGETHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_vmac2su_s0)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(0,fMPY16SU(fGETHALF(0,RsV),fGETUHALF(0,RtV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(0,fMPY16SU(fGETHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_vmac2su_s1)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(1,fMPY16SU(fGETHALF(0,RsV),fGETUHALF(0,RtV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(1,fMPY16SU(fGETHALF(1,RsV),fGETUHALF(1,RtV)))));}
    return RxxV;
}

int32_t HELPER(M2_vmpy2s_s0pack)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(1,RdV,fGETHALF(1,(fSAT(fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))) + 0x8000)))); fSETHALF(0,RdV,fGETHALF(1,(fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + 0x8000))));}
    return RdV;
}

int32_t HELPER(M2_vmpy2s_s1pack)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(1,RdV,fGETHALF(1,(fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))) + 0x8000)))); fSETHALF(0,RdV,fGETHALF(1,(fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + 0x8000))));}
    return RdV;
}

int64_t HELPER(M2_vmac2)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    { fSETWORD(0,RxxV,fGETWORD(0,RxxV) + fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))); fSETWORD(1,RxxV,fGETWORD(1,RxxV) + fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)));}
    return RxxV;
}

int64_t HELPER(M2_vmpy2es_s0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))))); fSETWORD(1,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)))));}
    return RddV;
}

int64_t HELPER(M2_vmpy2es_s1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))))); fSETWORD(1,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)))));}
    return RddV;
}

int64_t HELPER(M2_vmac2es_s0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)))));}
    return RxxV;
}

int64_t HELPER(M2_vmac2es_s1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)))));}
    return RxxV;
}

int64_t HELPER(M2_vmac2es)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { fSETWORD(0,RxxV,fGETWORD(0,RxxV) + fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))); fSETWORD(1,RxxV,fGETWORD(1,RxxV) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)));}
    return RxxV;
}

int64_t HELPER(M2_vrmac_s0)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV = RxxV + fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV));}
    return RxxV;
}

int64_t HELPER(M2_vrmpy_s0)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV));}
    return RddV;
}

int32_t HELPER(M2_vdmpyrs_s0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(0,RdV,fGETHALF(1,(fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))) + fSCALE(0,fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))) + 0x8000)))); fSETHALF(1,RdV,fGETHALF(1,(fSAT(fSCALE(0,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV))) + fSCALE(0,fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV))) + 0x8000))));}
    return RdV;
}

int32_t HELPER(M2_vdmpyrs_s1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(0,RdV,fGETHALF(1,(fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))) + fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))) + 0x8000)))); fSETHALF(1,RdV,fGETHALF(1,(fSAT(fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV))) + 0x8000))));}
    return RdV;
}

int64_t HELPER(M5_vrmpybuu)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,(fMPY16SS(fGETUBYTE(0,RssV),fGETUBYTE(0,RttV)) + fMPY16SS(fGETUBYTE(1,RssV),fGETUBYTE(1,RttV)) + fMPY16SS(fGETUBYTE(2,RssV),fGETUBYTE(2,RttV)) + fMPY16SS(fGETUBYTE(3,RssV),fGETUBYTE(3,RttV)))); fSETWORD(1,RddV,(fMPY16SS(fGETUBYTE(4,RssV),fGETUBYTE(4,RttV)) + fMPY16SS(fGETUBYTE(5,RssV),fGETUBYTE(5,RttV)) + fMPY16SS(fGETUBYTE(6,RssV),fGETUBYTE(6,RttV)) + fMPY16SS(fGETUBYTE(7,RssV),fGETUBYTE(7,RttV)))); }
    return RddV;
}

int64_t HELPER(M5_vrmacbuu)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { fSETWORD(0,RxxV,(fGETWORD(0,RxxV) + fMPY16SS(fGETUBYTE(0,RssV),fGETUBYTE(0,RttV)) + fMPY16SS(fGETUBYTE(1,RssV),fGETUBYTE(1,RttV)) + fMPY16SS(fGETUBYTE(2,RssV),fGETUBYTE(2,RttV)) + fMPY16SS(fGETUBYTE(3,RssV),fGETUBYTE(3,RttV)))); fSETWORD(1,RxxV,(fGETWORD(1,RxxV) + fMPY16SS(fGETUBYTE(4,RssV),fGETUBYTE(4,RttV)) + fMPY16SS(fGETUBYTE(5,RssV),fGETUBYTE(5,RttV)) + fMPY16SS(fGETUBYTE(6,RssV),fGETUBYTE(6,RttV)) + fMPY16SS(fGETUBYTE(7,RssV),fGETUBYTE(7,RttV)))); }
    return RxxV;
}

int64_t HELPER(M5_vrmpybsu)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,(fMPY16SS(fGETBYTE(0,RssV),fGETUBYTE(0,RttV)) + fMPY16SS(fGETBYTE(1,RssV),fGETUBYTE(1,RttV)) + fMPY16SS(fGETBYTE(2,RssV),fGETUBYTE(2,RttV)) + fMPY16SS(fGETBYTE(3,RssV),fGETUBYTE(3,RttV)))); fSETWORD(1,RddV,(fMPY16SS(fGETBYTE(4,RssV),fGETUBYTE(4,RttV)) + fMPY16SS(fGETBYTE(5,RssV),fGETUBYTE(5,RttV)) + fMPY16SS(fGETBYTE(6,RssV),fGETUBYTE(6,RttV)) + fMPY16SS(fGETBYTE(7,RssV),fGETUBYTE(7,RttV)))); }
    return RddV;
}

int64_t HELPER(M5_vrmacbsu)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { fSETWORD(0,RxxV,(fGETWORD(0,RxxV) + fMPY16SS(fGETBYTE(0,RssV),fGETUBYTE(0,RttV)) + fMPY16SS(fGETBYTE(1,RssV),fGETUBYTE(1,RttV)) + fMPY16SS(fGETBYTE(2,RssV),fGETUBYTE(2,RttV)) + fMPY16SS(fGETBYTE(3,RssV),fGETUBYTE(3,RttV)))); fSETWORD(1,RxxV,(fGETWORD(1,RxxV) + fMPY16SS(fGETBYTE(4,RssV),fGETUBYTE(4,RttV)) + fMPY16SS(fGETBYTE(5,RssV),fGETUBYTE(5,RttV)) + fMPY16SS(fGETBYTE(6,RssV),fGETUBYTE(6,RttV)) + fMPY16SS(fGETBYTE(7,RssV),fGETUBYTE(7,RttV)))); }
    return RxxV;
}

int64_t HELPER(M5_vmpybuu)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,(fMPY16SS(fGETUBYTE(0,RsV),fGETUBYTE(0,RtV)))); fSETHALF(1,RddV,(fMPY16SS(fGETUBYTE(1,RsV),fGETUBYTE(1,RtV)))); fSETHALF(2,RddV,(fMPY16SS(fGETUBYTE(2,RsV),fGETUBYTE(2,RtV)))); fSETHALF(3,RddV,(fMPY16SS(fGETUBYTE(3,RsV),fGETUBYTE(3,RtV)))); }
    return RddV;
}

int64_t HELPER(M5_vmpybsu)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,(fMPY16SS(fGETBYTE(0,RsV),fGETUBYTE(0,RtV)))); fSETHALF(1,RddV,(fMPY16SS(fGETBYTE(1,RsV),fGETUBYTE(1,RtV)))); fSETHALF(2,RddV,(fMPY16SS(fGETBYTE(2,RsV),fGETUBYTE(2,RtV)))); fSETHALF(3,RddV,(fMPY16SS(fGETBYTE(3,RsV),fGETUBYTE(3,RtV)))); }
    return RddV;
}

int64_t HELPER(M5_vmacbuu)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    { fSETHALF(0,RxxV,(fGETHALF(0,RxxV)+fMPY16SS(fGETUBYTE(0,RsV),fGETUBYTE(0,RtV)))); fSETHALF(1,RxxV,(fGETHALF(1,RxxV)+fMPY16SS(fGETUBYTE(1,RsV),fGETUBYTE(1,RtV)))); fSETHALF(2,RxxV,(fGETHALF(2,RxxV)+fMPY16SS(fGETUBYTE(2,RsV),fGETUBYTE(2,RtV)))); fSETHALF(3,RxxV,(fGETHALF(3,RxxV)+fMPY16SS(fGETUBYTE(3,RsV),fGETUBYTE(3,RtV)))); }
    return RxxV;
}

int64_t HELPER(M5_vmacbsu)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    { fSETHALF(0,RxxV,(fGETHALF(0,RxxV)+fMPY16SS(fGETBYTE(0,RsV),fGETUBYTE(0,RtV)))); fSETHALF(1,RxxV,(fGETHALF(1,RxxV)+fMPY16SS(fGETBYTE(1,RsV),fGETUBYTE(1,RtV)))); fSETHALF(2,RxxV,(fGETHALF(2,RxxV)+fMPY16SS(fGETBYTE(2,RsV),fGETUBYTE(2,RtV)))); fSETHALF(3,RxxV,(fGETHALF(3,RxxV)+fMPY16SS(fGETBYTE(3,RsV),fGETUBYTE(3,RtV)))); }
    return RxxV;
}

int64_t HELPER(M5_vdmpybsu)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,fSATN(16,(fMPY16SS(fGETBYTE(0,RssV),fGETUBYTE(0,RttV)) + fMPY16SS(fGETBYTE(1,RssV),fGETUBYTE(1,RttV))))); fSETHALF(1,RddV,fSATN(16,(fMPY16SS(fGETBYTE(2,RssV),fGETUBYTE(2,RttV)) + fMPY16SS(fGETBYTE(3,RssV),fGETUBYTE(3,RttV))))); fSETHALF(2,RddV,fSATN(16,(fMPY16SS(fGETBYTE(4,RssV),fGETUBYTE(4,RttV)) + fMPY16SS(fGETBYTE(5,RssV),fGETUBYTE(5,RttV))))); fSETHALF(3,RddV,fSATN(16,(fMPY16SS(fGETBYTE(6,RssV),fGETUBYTE(6,RttV)) + fMPY16SS(fGETBYTE(7,RssV),fGETUBYTE(7,RttV))))); }
    return RddV;
}

int64_t HELPER(M5_vdmacbsu)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETHALF(0,RxxV,fSATN(16,(fGETHALF(0,RxxV) + fMPY16SS(fGETBYTE(0,RssV),fGETUBYTE(0,RttV)) + fMPY16SS(fGETBYTE(1,RssV),fGETUBYTE(1,RttV))))); fSETHALF(1,RxxV,fSATN(16,(fGETHALF(1,RxxV) + fMPY16SS(fGETBYTE(2,RssV),fGETUBYTE(2,RttV)) + fMPY16SS(fGETBYTE(3,RssV),fGETUBYTE(3,RttV))))); fSETHALF(2,RxxV,fSATN(16,(fGETHALF(2,RxxV) + fMPY16SS(fGETBYTE(4,RssV),fGETUBYTE(4,RttV)) + fMPY16SS(fGETBYTE(5,RssV),fGETUBYTE(5,RttV))))); fSETHALF(3,RxxV,fSATN(16,(fGETHALF(3,RxxV) + fMPY16SS(fGETBYTE(6,RssV),fGETUBYTE(6,RttV)) + fMPY16SS(fGETBYTE(7,RssV),fGETUBYTE(7,RttV))))); }
    return RxxV;
}

int64_t HELPER(M2_vdmacs_s0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))) + fSCALE(0,fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV))) + fSCALE(0,fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV)))));}
    return RxxV;
}

int64_t HELPER(M2_vdmacs_s1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))) + fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV)))));}
    return RxxV;
}

int64_t HELPER(M2_vdmpys_s0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))) + fSCALE(0,fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV))) + fSCALE(0,fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV)))));}
    return RddV;
}

int64_t HELPER(M2_vdmpys_s1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV))) + fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV)))));}
    return RddV;
}

int32_t HELPER(M2_cmpyrs_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(1,RdV,fGETHALF(1,(fSAT(fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) + fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))) + 0x8000)))); fSETHALF(0,RdV,fGETHALF(1,(fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) - fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))) + 0x8000))));}
    return RdV;
}

int32_t HELPER(M2_cmpyrs_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(1,RdV,fGETHALF(1,(fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) + fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))) + 0x8000)))); fSETHALF(0,RdV,fGETHALF(1,(fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) - fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))) + 0x8000))));}
    return RdV;
}

int32_t HELPER(M2_cmpyrsc_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(1,RdV,fGETHALF(1,(fSAT(fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) - fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))) + 0x8000)))); fSETHALF(0,RdV,fGETHALF(1,(fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))) + 0x8000))));}
    return RdV;
}

int32_t HELPER(M2_cmpyrsc_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(1,RdV,fGETHALF(1,(fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) - fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))) + 0x8000)))); fSETHALF(0,RdV,fGETHALF(1,(fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))) + 0x8000))));}
    return RdV;
}

int64_t HELPER(M2_cmacs_s0)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) + fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) - fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_cmacs_s1)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) + fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) - fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_cmacsc_s0)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) - fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_cmacsc_s1)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) - fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RxxV;
}

int64_t HELPER(M2_cmpys_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) + fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))))); fSETWORD(0,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) - fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_cmpys_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) + fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))))); fSETWORD(0,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) - fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_cmpysc_s0)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) - fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))))); fSETWORD(0,RddV,fSAT(fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_cmpysc_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) - fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV))))); fSETWORD(0,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)))));}
    return RddV;
}

int64_t HELPER(M2_cnacs_s0)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) - (fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) + fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) - (fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) - fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))))));}
    return RxxV;
}

int64_t HELPER(M2_cnacs_s1)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) - (fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) + fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) - (fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) - fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))))));}
    return RxxV;
}

int64_t HELPER(M2_cnacsc_s0)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) - (fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) - fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) - (fSCALE(0,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + fSCALE(0,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))))));}
    return RxxV;
}

int64_t HELPER(M2_cnacsc_s1)(CPUHexagonState *env, int64_t RxxV, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) - (fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV))) - fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) - (fSCALE(1,fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV))) + fSCALE(1,fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV))))));}
    return RxxV;
}

int64_t HELPER(M2_vrcmpys_s1_h)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,fGETWORD(1,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(1,fGETWORD(1,RttV)))))); fSETWORD(0,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,fGETWORD(1,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(1,fGETWORD(1,RttV))))));}
    return RddV;
}

int64_t HELPER(M2_vrcmpys_s1_l)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,fGETWORD(0,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(1,fGETWORD(0,RttV)))))); fSETWORD(0,RddV,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,fGETWORD(0,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(1,fGETWORD(0,RttV))))));}
    return RddV;
}

int64_t HELPER(M2_vrcmpys_acc_s1_h)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,fGETWORD(1,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(1,fGETWORD(1,RttV)))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,fGETWORD(1,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(1,fGETWORD(1,RttV))))));}
    return RxxV;
}

int64_t HELPER(M2_vrcmpys_acc_s1_l)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,fGETWORD(0,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(1,fGETWORD(0,RttV)))))); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,fGETWORD(0,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(1,fGETWORD(0,RttV))))));}
    return RxxV;
}

int32_t HELPER(M2_vrcmpys_s1rp_h)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(1,RdV,fGETHALF(1,fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,fGETWORD(1,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(1,fGETWORD(1,RttV)))) + 0x8000))); fSETHALF(0,RdV,fGETHALF(1,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,fGETWORD(1,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(1,fGETWORD(1,RttV)))) + 0x8000)));}
    return RdV;
}

int32_t HELPER(M2_vrcmpys_s1rp_l)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETHALF(1,RdV,fGETHALF(1,fSAT(fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,fGETWORD(0,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(1,fGETWORD(0,RttV)))) + 0x8000))); fSETHALF(0,RdV,fGETHALF(1,fSAT(fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,fGETWORD(0,RttV)))) + fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(1,fGETWORD(0,RttV)))) + 0x8000)));}
    return RdV;
}

int64_t HELPER(M2_mmacls_s0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV))))>>16)) ); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV))))>>16)) ); }
    return RxxV;
}

int64_t HELPER(M2_mmacls_s1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV))))>>16)) ); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV))))>>16)) ); }
    return RxxV;
}

int64_t HELPER(M2_mmachs_s0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV))))>>16) )); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV))))>>16 ))); }
    return RxxV;
}

int64_t HELPER(M2_mmachs_s1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV))))>>16) )); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV))))>>16 ))); }
    return RxxV;
}

int64_t HELPER(M2_mmpyl_s0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV))))>>16)); fSETWORD(0,RddV,fSAT((fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV))))>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyl_s1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV))))>>16)); fSETWORD(0,RddV,fSAT((fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV))))>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyh_s0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV))))>>16)); fSETWORD(0,RddV,fSAT((fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV))))>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyh_s1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV))))>>16)); fSETWORD(0,RddV,fSAT((fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV))))>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmacls_rs0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV)))+0x8000)>>16)) ); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV)))+0x8000)>>16)) ); }
    return RxxV;
}

int64_t HELPER(M2_mmacls_rs1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV)))+0x8000)>>16)) ); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV)))+0x8000)>>16)) ); }
    return RxxV;
}

int64_t HELPER(M2_mmachs_rs0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV)))+0x8000)>>16) )); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV)))+0x8000)>>16 ))); }
    return RxxV;
}

int64_t HELPER(M2_mmachs_rs1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV)))+0x8000)>>16) )); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV)))+0x8000)>>16 ))); }
    return RxxV;
}

int64_t HELPER(M2_mmpyl_rs0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV)))+0x8000)>>16)); fSETWORD(0,RddV,fSAT((fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV)))+0x8000)>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyl_rs1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV)))+0x8000)>>16)); fSETWORD(0,RddV,fSAT((fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV)))+0x8000)>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyh_rs0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV)))+0x8000)>>16)); fSETWORD(0,RddV,fSAT((fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV)))+0x8000)>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyh_rs1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV)))+0x8000)>>16)); fSETWORD(0,RddV,fSAT((fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV)))+0x8000)>>16)); }
    return RddV;
}

int64_t HELPER(M4_vrmpyeh_s0)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV))) + fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV)));}
    return RddV;
}

int64_t HELPER(M4_vrmpyeh_s1)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV))) + fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV)));}
    return RddV;
}

int64_t HELPER(M4_vrmpyeh_acc_s0)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV))) + fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV)));}
    return RxxV;
}

int64_t HELPER(M4_vrmpyeh_acc_s1)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(2,RttV))) + fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RttV)));}
    return RxxV;
}

int64_t HELPER(M4_vrmpyoh_s0)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV))) + fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV)));}
    return RddV;
}

int64_t HELPER(M4_vrmpyoh_s1)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV))) + fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV)));}
    return RddV;
}

int64_t HELPER(M4_vrmpyoh_acc_s0)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += fSCALE(0,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV))) + fSCALE(0,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV)));}
    return RxxV;
}

int64_t HELPER(M4_vrmpyoh_acc_s1)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += fSCALE(1,fMPY3216SS(fGETWORD(1,RssV),fGETHALF(3,RttV))) + fSCALE(1,fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RttV)));}
    return RxxV;
}

int32_t HELPER(M2_hmmpyl_rs1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT((fSCALE(1,fMPY3216SS(RsV,fGETHALF(0,RtV)))+0x8000)>>16); }
    return RdV;
}

int32_t HELPER(M2_hmmpyh_rs1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT((fSCALE(1,fMPY3216SS(RsV,fGETHALF(1,RtV)))+0x8000)>>16); }
    return RdV;
}

int32_t HELPER(M2_hmmpyl_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT((fSCALE(1,fMPY3216SS(RsV,fGETHALF(0,RtV))))>>16); }
    return RdV;
}

int32_t HELPER(M2_hmmpyh_s1)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT((fSCALE(1,fMPY3216SS(RsV,fGETHALF(1,RtV))))>>16); }
    return RdV;
}

int64_t HELPER(M2_mmaculs_s0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(0,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(2,RttV))))>>16)) ); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(0,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(0,RttV))))>>16)) ); }
    return RxxV;
}

int64_t HELPER(M2_mmaculs_s1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(1,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(2,RttV))))>>16)) ); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(1,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(0,RttV))))>>16)) ); }
    return RxxV;
}

int64_t HELPER(M2_mmacuhs_s0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(0,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(3,RttV))))>>16) )); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(0,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(1,RttV))))>>16 ))); }
    return RxxV;
}

int64_t HELPER(M2_mmacuhs_s1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(1,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(3,RttV))))>>16) )); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(1,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(1,RttV))))>>16 ))); }
    return RxxV;
}

int64_t HELPER(M2_mmpyul_s0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(0,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(2,RttV))))>>16)); fSETWORD(0,RddV,fSAT((fSCALE(0,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(0,RttV))))>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyul_s1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(1,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(2,RttV))))>>16)); fSETWORD(0,RddV,fSAT((fSCALE(1,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(0,RttV))))>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyuh_s0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(0,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(3,RttV))))>>16)); fSETWORD(0,RddV,fSAT((fSCALE(0,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(1,RttV))))>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyuh_s1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(1,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(3,RttV))))>>16)); fSETWORD(0,RddV,fSAT((fSCALE(1,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(1,RttV))))>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmaculs_rs0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(0,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(2,RttV)))+0x8000)>>16)) ); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(0,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(0,RttV)))+0x8000)>>16)) ); }
    return RxxV;
}

int64_t HELPER(M2_mmaculs_rs1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(1,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(2,RttV)))+0x8000)>>16)) ); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(1,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(0,RttV)))+0x8000)>>16)) ); }
    return RxxV;
}

int64_t HELPER(M2_mmacuhs_rs0)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(0,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(3,RttV)))+0x8000)>>16) )); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(0,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(1,RttV)))+0x8000)>>16 ))); }
    return RxxV;
}

int64_t HELPER(M2_mmacuhs_rs1)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + ((fSCALE(1,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(3,RttV)))+0x8000)>>16) )); fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + ((fSCALE(1,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(1,RttV)))+0x8000)>>16 ))); }
    return RxxV;
}

int64_t HELPER(M2_mmpyul_rs0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(0,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(2,RttV)))+0x8000)>>16)); fSETWORD(0,RddV,fSAT((fSCALE(0,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(0,RttV)))+0x8000)>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyul_rs1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(1,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(2,RttV)))+0x8000)>>16)); fSETWORD(0,RddV,fSAT((fSCALE(1,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(0,RttV)))+0x8000)>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyuh_rs0)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(0,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(3,RttV)))+0x8000)>>16)); fSETWORD(0,RddV,fSAT((fSCALE(0,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(1,RttV)))+0x8000)>>16)); }
    return RddV;
}

int64_t HELPER(M2_mmpyuh_rs1)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,fSAT((fSCALE(1,fMPY3216SU(fGETWORD(1,RssV),fGETUHALF(3,RttV)))+0x8000)>>16)); fSETWORD(0,RddV,fSAT((fSCALE(1,fMPY3216SU(fGETWORD(0,RssV),fGETUHALF(1,RttV)))+0x8000)>>16)); }
    return RddV;
}

int64_t HELPER(M2_vrcmaci_s0)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV = RxxV + fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(0,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(3,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(3,RttV));}
    return RxxV;
}

int64_t HELPER(M2_vrcmacr_s0)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV = RxxV + fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) - fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) - fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV));}
    return RxxV;
}

int64_t HELPER(M2_vrcmaci_s0c)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV = RxxV + fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,RttV)) - fMPY16SS(fGETHALF(0,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(3,RssV),fGETHALF(2,RttV)) - fMPY16SS(fGETHALF(2,RssV),fGETHALF(3,RttV));}
    return RxxV;
}

int64_t HELPER(M2_vrcmacr_s0c)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV = RxxV + fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV));}
    return RxxV;
}

int64_t HELPER(M2_cmaci_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    { RxxV = RxxV + fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)) + fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)); }
    return RxxV;
}

int64_t HELPER(M2_cmacr_s0)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    { RxxV = RxxV + fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)) - fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)); }
    return RxxV;
}

int64_t HELPER(M2_vrcmpyi_s0)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(0,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(3,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(3,RttV));}
    return RddV;
}

int64_t HELPER(M2_vrcmpyr_s0)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) - fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) - fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV));}
    return RddV;
}

int64_t HELPER(M2_vrcmpyi_s0c)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,RttV)) - fMPY16SS(fGETHALF(0,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(3,RssV),fGETHALF(2,RttV)) - fMPY16SS(fGETHALF(2,RssV),fGETHALF(3,RttV));}
    return RddV;
}

int64_t HELPER(M2_vrcmpyr_s0c)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV));}
    return RddV;
}

int64_t HELPER(M2_cmpyi_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { RddV = fMPY16SS(fGETHALF(1,RsV),fGETHALF(0,RtV)) + fMPY16SS(fGETHALF(0,RsV),fGETHALF(1,RtV)); }
    return RddV;
}

int64_t HELPER(M2_cmpyr_s0)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { RddV = fMPY16SS(fGETHALF(0,RsV),fGETHALF(0,RtV)) - fMPY16SS(fGETHALF(1,RsV),fGETHALF(1,RtV)); }
    return RddV;
}

int32_t HELPER(M4_cmpyi_wh)(CPUHexagonState *env, int64_t RssV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT( ( fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RtV)) + fMPY3216SS(fGETWORD(1,RssV),fGETHALF(0,RtV)) + 0x4000)>>15); }
    return RdV;
}

int32_t HELPER(M4_cmpyr_wh)(CPUHexagonState *env, int64_t RssV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT( ( fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RtV)) - fMPY3216SS(fGETWORD(1,RssV),fGETHALF(1,RtV)) + 0x4000)>>15); }
    return RdV;
}

int32_t HELPER(M4_cmpyi_whc)(CPUHexagonState *env, int64_t RssV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT( ( fMPY3216SS(fGETWORD(1,RssV),fGETHALF(0,RtV)) - fMPY3216SS(fGETWORD(0,RssV),fGETHALF(1,RtV)) + 0x4000)>>15); }
    return RdV;
}

int32_t HELPER(M4_cmpyr_whc)(CPUHexagonState *env, int64_t RssV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT( ( fMPY3216SS(fGETWORD(0,RssV),fGETHALF(0,RtV)) + fMPY3216SS(fGETWORD(1,RssV),fGETHALF(1,RtV)) + 0x4000)>>15); }
    return RdV;
}

int64_t HELPER(M2_vcmpy_s0_sat_i)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT( fSCALE(0,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(0,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RddV,fSAT( fSCALE(0,fMPY16SS(fGETHALF(3,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(3,RttV)))));; }
    return RddV;
}

int64_t HELPER(M2_vcmpy_s0_sat_r)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT( fSCALE(0,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) - fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RddV,fSAT( fSCALE(0,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) - fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV)))));; }
    return RddV;
}

int64_t HELPER(M2_vcmpy_s1_sat_i)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT( fSCALE(1,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(0,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RddV,fSAT( fSCALE(1,fMPY16SS(fGETHALF(3,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(3,RttV)))));; }
    return RddV;
}

int64_t HELPER(M2_vcmpy_s1_sat_r)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT( fSCALE(1,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) - fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RddV,fSAT( fSCALE(1,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) - fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV)))));; }
    return RddV;
}

int64_t HELPER(M2_vcmac_s0_sat_i)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(1,RssV),fGETHALF(0,RttV)) + fMPY16SS(fGETHALF(0,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(3,RssV),fGETHALF(2,RttV)) + fMPY16SS(fGETHALF(2,RssV),fGETHALF(3,RttV)))));; }
    return RxxV;
}

int64_t HELPER(M2_vcmac_s0_sat_r)(CPUHexagonState *env, int64_t RxxV, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    { fSETWORD(0,RxxV,fSAT(fGETWORD(0,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(0,RssV),fGETHALF(0,RttV)) - fMPY16SS(fGETHALF(1,RssV),fGETHALF(1,RttV))))); fSETWORD(1,RxxV,fSAT(fGETWORD(1,RxxV) + fSCALE(0,fMPY16SS(fGETHALF(2,RssV),fGETHALF(2,RttV)) - fMPY16SS(fGETHALF(3,RssV),fGETHALF(3,RttV)))));; }
    return RxxV;
}

int64_t HELPER(S2_vcrotate)(CPUHexagonState *env, int64_t RssV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(size1u_t tmp;) tmp = fEXTRACTU_RANGE(RtV,1,0); if (tmp == 0) { fSETHALF(0,RddV,fGETHALF(0,RssV)); fSETHALF(1,RddV,fGETHALF(1,RssV)); } else if (tmp == 1) { fSETHALF(0,RddV,fGETHALF(1,RssV)); fSETHALF(1,RddV,fSATH(-fGETHALF(0,RssV))); } else if (tmp == 2) { fSETHALF(0,RddV,fSATH(-fGETHALF(1,RssV))); fSETHALF(1,RddV,fGETHALF(0,RssV)); } else { fHIDE(if (tmp != 3) fatal("C is broken");) fSETHALF(0,RddV,fSATH(-fGETHALF(0,RssV))); fSETHALF(1,RddV,fSATH(-fGETHALF(1,RssV))); } tmp = fEXTRACTU_RANGE(RtV,3,2); if (tmp == 0) { fSETHALF(2,RddV,fGETHALF(2,RssV)); fSETHALF(3,RddV,fGETHALF(3,RssV)); } else if (tmp == 1) { fSETHALF(2,RddV,fGETHALF(3,RssV)); fSETHALF(3,RddV,fSATH(-fGETHALF(2,RssV))); } else if (tmp == 2) { fSETHALF(2,RddV,fSATH(-fGETHALF(3,RssV))); fSETHALF(3,RddV,fGETHALF(2,RssV)); } else { fHIDE(if (tmp != 3) fatal("C is broken");) fSETHALF(2,RddV,fSATH(-fGETHALF(2,RssV))); fSETHALF(3,RddV,fSATH(-fGETHALF(3,RssV))); } }
    return RddV;
}

int64_t HELPER(S4_vrcrotate_acc)(int64_t RxxV, int64_t RssV, int32_t RtV, int32_t uiV)
{
    { fHIDE(int i; int tmpr; int tmpi; unsigned int control;) fHIDE(int sumr; int sumi;) sumr = 0; sumi = 0; control = fGETUBYTE(uiV,RtV); for (i = 0; i < 8; i += 2) { tmpr = fGETBYTE(i ,RssV); tmpi = fGETBYTE(i+1,RssV); switch (control & 3) { case 0: sumr += tmpr; sumi += tmpi; break; case 1: sumr += tmpi; sumi -= tmpr; break; case 2: sumr -= tmpi; sumi += tmpr; break; case 3: sumr -= tmpr; sumi -= tmpi; break; fHIDE(default: fatal("C is broken!");) } control = control >> 2; } fSETWORD(0,RxxV,fGETWORD(0,RxxV) + sumr); fSETWORD(1,RxxV,fGETWORD(1,RxxV) + sumi); }
    return RxxV;
}

int64_t HELPER(S4_vrcrotate)(int64_t RssV, int32_t RtV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(int i; int tmpr; int tmpi; unsigned int control;) fHIDE(int sumr; int sumi;) sumr = 0; sumi = 0; control = fGETUBYTE(uiV,RtV); for (i = 0; i < 8; i += 2) { tmpr = fGETBYTE(i ,RssV); tmpi = fGETBYTE(i+1,RssV); switch (control & 3) { case 0: sumr += tmpr; sumi += tmpi; break; case 1: sumr += tmpi; sumi -= tmpr; break; case 2: sumr -= tmpi; sumi += tmpr; break; case 3: sumr -= tmpr; sumi -= tmpi; break; fHIDE(default: fatal("C is broken!");) } control = control >> 2; } fSETWORD(0,RddV,sumr); fSETWORD(1,RddV,sumi); }
    return RddV;
}

int64_t HELPER(S2_vcnegh)(CPUHexagonState *env, int64_t RssV, int32_t RtV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { if (fGETBIT(i,RtV)) { fSETHALF(i,RddV,fSATH(-fGETHALF(i,RssV))); } else { fSETHALF(i,RddV,fGETHALF(i,RssV)); } } }
    return RddV;
}

int64_t HELPER(S2_vrcnegh)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(int i;) for (i = 0; i < 4; i++) { if (fGETBIT(i,RtV)) { RxxV += -fGETHALF(i,RssV); } else { RxxV += fGETHALF(i,RssV); } } }
    return RxxV;
}

int64_t HELPER(M4_pmpyw)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i; unsigned int y;) fHIDE(unsigned long long x; unsigned long long prod;) x = fGETUWORD(0, RsV); y = fGETUWORD(0, RtV); prod = 0; for(i=0; i < 32; i++) { if((y >> i) & 1) prod ^= (x << i); } RddV = prod; }
    return RddV;
}

int64_t HELPER(M4_vpmpyh)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i; unsigned int x0; unsigned int x1;) fHIDE(unsigned int y0; unsigned int y1;) fHIDE(unsigned int prod0; unsigned int prod1;) x0 = fGETUHALF(0, RsV); x1 = fGETUHALF(1, RsV); y0 = fGETUHALF(0, RtV); y1 = fGETUHALF(1, RtV); prod0 = prod1 = 0; for(i=0; i < 16; i++) { if((y0 >> i) & 1) prod0 ^= (x0 << i); if((y1 >> i) & 1) prod1 ^= (x1 << i); } fSETHALF(0,RddV,fGETUHALF(0,prod0)); fSETHALF(1,RddV,fGETUHALF(0,prod1)); fSETHALF(2,RddV,fGETUHALF(1,prod0)); fSETHALF(3,RddV,fGETUHALF(1,prod1)); }
    return RddV;
}

int64_t HELPER(M4_pmpyw_acc)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(int i; unsigned int y;) fHIDE(unsigned long long x; unsigned long long prod;) x = fGETUWORD(0, RsV); y = fGETUWORD(0, RtV); prod = 0; for(i=0; i < 32; i++) { if((y >> i) & 1) prod ^= (x << i); } RxxV ^= prod; }
    return RxxV;
}

int64_t HELPER(M4_vpmpyh_acc)(int64_t RxxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(int i; unsigned int x0; unsigned int x1;) fHIDE(unsigned int y0; unsigned int y1;) fHIDE(unsigned int prod0; unsigned int prod1;) x0 = fGETUHALF(0, RsV); x1 = fGETUHALF(1, RsV); y0 = fGETUHALF(0, RtV); y1 = fGETUHALF(1, RtV); prod0 = prod1 = 0; for(i=0; i < 16; i++) { if((y0 >> i) & 1) prod0 ^= (x0 << i); if((y1 >> i) & 1) prod1 ^= (x1 << i); } fSETHALF(0,RxxV,fGETUHALF(0,RxxV) ^ fGETUHALF(0,prod0)); fSETHALF(1,RxxV,fGETUHALF(1,RxxV) ^ fGETUHALF(0,prod1)); fSETHALF(2,RxxV,fGETUHALF(2,RxxV) ^ fGETUHALF(1,prod0)); fSETHALF(3,RxxV,fGETUHALF(3,RxxV) ^ fGETUHALF(1,prod1)); }
    return RxxV;
}

int64_t HELPER(M7_dcmpyrw)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = (fMPY32SS(fGETWORD(0, RssV), fGETWORD(0, RttV)) - fMPY32SS(fGETWORD(1, RssV), fGETWORD(1, RttV)));}
    return RddV;
}

int64_t HELPER(M7_dcmpyrw_acc)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += (fMPY32SS(fGETWORD(0, RssV), fGETWORD(0, RttV)) - fMPY32SS(fGETWORD(1, RssV), fGETWORD(1, RttV)));}
    return RxxV;
}

int64_t HELPER(M7_dcmpyrwc)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = (fMPY32SS(fGETWORD(0, RssV), fGETWORD(0, RttV)) + fMPY32SS(fGETWORD(1, RssV), fGETWORD(1, RttV)));}
    return RddV;
}

int64_t HELPER(M7_dcmpyrwc_acc)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += (fMPY32SS(fGETWORD(0, RssV), fGETWORD(0, RttV)) + fMPY32SS(fGETWORD(1, RssV), fGETWORD(1, RttV)));}
    return RxxV;
}

int64_t HELPER(M7_dcmpyiw)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = (fMPY32SS(fGETWORD(0, RssV), fGETWORD(1, RttV)) + fMPY32SS(fGETWORD(1, RssV), fGETWORD(0, RttV)));}
    return RddV;
}

int64_t HELPER(M7_dcmpyiw_acc)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += (fMPY32SS(fGETWORD(0, RssV), fGETWORD(1, RttV)) + fMPY32SS(fGETWORD(1, RssV), fGETWORD(0, RttV)));}
    return RxxV;
}

int64_t HELPER(M7_dcmpyiwc)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = (fMPY32SS(fGETWORD(1, RssV), fGETWORD(0, RttV)) - fMPY32SS(fGETWORD(0, RssV), fGETWORD(1, RttV)));}
    return RddV;
}

int64_t HELPER(M7_dcmpyiwc_acc)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += (fMPY32SS(fGETWORD(1, RssV), fGETWORD(0, RttV)) - fMPY32SS(fGETWORD(0, RssV), fGETWORD(1, RttV)));}
    return RxxV;
}

int32_t HELPER(M7_wcmpyrw)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size16s_t acc128;)fHIDE(size16s_t tmp128;)fHIDE(size8s_t acc64;)tmp128 = fCAST8S_16S(fMPY32SS(fGETWORD(0, RssV), fGETWORD(0, RttV)));acc128 = fCAST8S_16S(fMPY32SS(fGETWORD(1, RssV), fGETWORD(1, RttV)));acc128 = fSUB128(tmp128,acc128);acc128 = fSHIFTR128(acc128, 31);acc64 = fCAST16S_8S(acc128);RdV = fSATW(acc64);}
    return RdV;
}

int32_t HELPER(M7_wcmpyrwc)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size16s_t acc128;)fHIDE(size16s_t tmp128;)fHIDE(size8s_t acc64;)tmp128 = fCAST8S_16S(fMPY32SS(fGETWORD(0, RssV), fGETWORD(0, RttV)));acc128 = fCAST8S_16S(fMPY32SS(fGETWORD(1, RssV), fGETWORD(1, RttV)));acc128 = fADD128(tmp128,acc128);acc128 = fSHIFTR128(acc128, 31);acc64 = fCAST16S_8S(acc128);RdV = fSATW(acc64);}
    return RdV;
}

int32_t HELPER(M7_wcmpyiw)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size16s_t acc128;)fHIDE(size16s_t tmp128;)fHIDE(size8s_t acc64;)tmp128 = fCAST8S_16S(fMPY32SS(fGETWORD(0, RssV), fGETWORD(1, RttV)));acc128 = fCAST8S_16S(fMPY32SS(fGETWORD(1, RssV), fGETWORD(0, RttV)));acc128 = fADD128(tmp128,acc128);acc128 = fSHIFTR128(acc128, 31);acc64 = fCAST16S_8S(acc128);RdV = fSATW(acc64);}
    return RdV;
}

int32_t HELPER(M7_wcmpyiwc)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size16s_t acc128;)fHIDE(size16s_t tmp128;)fHIDE(size8s_t acc64;)tmp128 = fCAST8S_16S(fMPY32SS(fGETWORD(1, RssV), fGETWORD(0, RttV)));acc128 = fCAST8S_16S(fMPY32SS(fGETWORD(0, RssV), fGETWORD(1, RttV)));acc128 = fSUB128(tmp128,acc128);acc128 = fSHIFTR128(acc128, 31);acc64 = fCAST16S_8S(acc128);RdV = fSATW(acc64);}
    return RdV;
}

int32_t HELPER(M7_wcmpyrw_rnd)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size16s_t acc128;)fHIDE(size16s_t tmp128;)fHIDE(size16s_t const128;)fHIDE(size8s_t acc64;)tmp128 = fCAST8S_16S(fMPY32SS(fGETWORD(0, RssV), fGETWORD(0, RttV)));acc128 = fCAST8S_16S(fMPY32SS(fGETWORD(1, RssV), fGETWORD(1, RttV)));const128 = fCAST8S_16S(fCONSTLL(0x40000000));acc128 = fSUB128(tmp128,acc128);acc128 = fADD128(acc128,const128);acc128 = fSHIFTR128(acc128, 31);acc64 = fCAST16S_8S(acc128);RdV = fSATW(acc64);}
    return RdV;
}

int32_t HELPER(M7_wcmpyrwc_rnd)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size16s_t acc128;)fHIDE(size16s_t tmp128;)fHIDE(size16s_t const128;)fHIDE(size8s_t acc64;)tmp128 = fCAST8S_16S(fMPY32SS(fGETWORD(0, RssV), fGETWORD(0, RttV)));acc128 = fCAST8S_16S(fMPY32SS(fGETWORD(1, RssV), fGETWORD(1, RttV)));const128 = fCAST8S_16S(fCONSTLL(0x40000000));acc128 = fADD128(tmp128,acc128);acc128 = fADD128(acc128,const128);acc128 = fSHIFTR128(acc128, 31);acc64 = fCAST16S_8S(acc128);RdV = fSATW(acc64);}
    return RdV;
}

int32_t HELPER(M7_wcmpyiw_rnd)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size16s_t acc128;)fHIDE(size16s_t tmp128;)fHIDE(size16s_t const128;)fHIDE(size8s_t acc64;)tmp128 = fCAST8S_16S(fMPY32SS(fGETWORD(0, RssV), fGETWORD(1, RttV)));acc128 = fCAST8S_16S(fMPY32SS(fGETWORD(1, RssV), fGETWORD(0, RttV)));const128 = fCAST8S_16S(fCONSTLL(0x40000000));acc128 = fADD128(tmp128,acc128);acc128 = fADD128(acc128,const128);acc128 = fSHIFTR128(acc128, 31);acc64 = fCAST16S_8S(acc128);RdV = fSATW(acc64);}
    return RdV;
}

int32_t HELPER(M7_wcmpyiwc_rnd)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size16s_t acc128;)fHIDE(size16s_t tmp128;)fHIDE(size16s_t const128;)fHIDE(size8s_t acc64;)tmp128 = fCAST8S_16S(fMPY32SS(fGETWORD(1, RssV), fGETWORD(0, RttV)));acc128 = fCAST8S_16S(fMPY32SS(fGETWORD(0, RssV), fGETWORD(1, RttV)));const128 = fCAST8S_16S(fCONSTLL(0x40000000));acc128 = fSUB128(tmp128,acc128);acc128 = fADD128(acc128,const128);acc128 = fSHIFTR128(acc128, 31);acc64 = fCAST16S_8S(acc128);RdV = fSATW(acc64);}
    return RdV;
}

int32_t HELPER(A2_add)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV=RsV+RtV;}
    return RdV;
}

int32_t HELPER(A2_sub)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    { RdV=RtV-RsV;}
    return RdV;
}

int32_t HELPER(A2_paddt)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    {if(fLSBOLD(PuV)){RdV=RsV+RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_paddf)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    {if(fLSBOLDNOT(PuV)){RdV=RsV+RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_paddtnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    {if(fLSBNEW(PuN)){RdV=RsV+RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_paddfnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    {if(fLSBNEWNOT(PuN)){RdV=RsV+RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_psubt)(int32_t RdV, int32_t PuV, int32_t RtV, int32_t RsV)
{
    {if(fLSBOLD(PuV)){RdV=RtV-RsV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_psubf)(int32_t RdV, int32_t PuV, int32_t RtV, int32_t RsV)
{
    {if(fLSBOLDNOT(PuV)){RdV=RtV-RsV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_psubtnew)(int32_t RdV, int32_t PuN, int32_t RtV, int32_t RsV)
{
    {if(fLSBNEW(PuN)){RdV=RtV-RsV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_psubfnew)(int32_t RdV, int32_t PuN, int32_t RtV, int32_t RsV)
{
    {if(fLSBNEWNOT(PuN)){RdV=RtV-RsV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_paddit)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t siV)
{
    {if(fLSBOLD(PuV)){fIMMEXT(siV); RdV=RsV+siV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_paddif)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t siV)
{
    {if(fLSBOLDNOT(PuV)){fIMMEXT(siV); RdV=RsV+siV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_padditnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t siV)
{
    {if(fLSBNEW(PuN)){fIMMEXT(siV); RdV=RsV+siV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_paddifnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t siV)
{
    {if(fLSBNEWNOT(PuN)){fIMMEXT(siV); RdV=RsV+siV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_pxort)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    {if(fLSBOLD(PuV)){RdV=RsV^RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_pxorf)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    {if(fLSBOLDNOT(PuV)){RdV=RsV^RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_pxortnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    {if(fLSBNEW(PuN)){RdV=RsV^RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_pxorfnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    {if(fLSBNEWNOT(PuN)){RdV=RsV^RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_pandt)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    {if(fLSBOLD(PuV)){RdV=RsV&RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_pandf)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    {if(fLSBOLDNOT(PuV)){RdV=RsV&RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_pandtnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    {if(fLSBNEW(PuN)){RdV=RsV&RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_pandfnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    {if(fLSBNEWNOT(PuN)){RdV=RsV&RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_port)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    {if(fLSBOLD(PuV)){RdV=RsV|RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_porf)(int32_t RdV, int32_t PuV, int32_t RsV, int32_t RtV)
{
    {if(fLSBOLDNOT(PuV)){RdV=RsV|RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_portnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    {if(fLSBNEW(PuN)){RdV=RsV|RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_porfnew)(int32_t RdV, int32_t PuN, int32_t RsV, int32_t RtV)
{
    {if(fLSBNEWNOT(PuN)){RdV=RsV|RtV;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_psxtbt)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLD(PuV)){RdV=fSXTN(8,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_psxtbf)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLDNOT(PuV)){RdV=fSXTN(8,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_psxtbtnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEW(PuN)){RdV=fSXTN(8,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_psxtbfnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEWNOT(PuN)){RdV=fSXTN(8,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pzxtbt)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLD(PuV)){RdV=fZXTN(8,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pzxtbf)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLDNOT(PuV)){RdV=fZXTN(8,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pzxtbtnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEW(PuN)){RdV=fZXTN(8,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pzxtbfnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEWNOT(PuN)){RdV=fZXTN(8,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_psxtht)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLD(PuV)){RdV=fSXTN(16,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_psxthf)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLDNOT(PuV)){RdV=fSXTN(16,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_psxthtnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEW(PuN)){RdV=fSXTN(16,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_psxthfnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEWNOT(PuN)){RdV=fSXTN(16,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pzxtht)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLD(PuV)){RdV=fZXTN(16,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pzxthf)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLDNOT(PuV)){RdV=fZXTN(16,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pzxthtnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEW(PuN)){RdV=fZXTN(16,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pzxthfnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEWNOT(PuN)){RdV=fZXTN(16,32,RsV);} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_paslht)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLD(PuV)){RdV=RsV<<16;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_paslhf)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLDNOT(PuV)){RdV=RsV<<16;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_paslhtnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEW(PuN)){RdV=RsV<<16;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_paslhfnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEWNOT(PuN)){RdV=RsV<<16;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pasrht)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLD(PuV)){RdV=RsV>>16;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pasrhf)(int32_t RdV, int32_t PuV, int32_t RsV)
{
    {if(fLSBOLDNOT(PuV)){RdV=RsV>>16;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pasrhtnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEW(PuN)){RdV=RsV>>16;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A4_pasrhfnew)(int32_t RdV, int32_t PuN, int32_t RsV)
{
    {if(fLSBNEWNOT(PuN)){RdV=RsV>>16;} else {CANCEL;}}
    return RdV;
}

int32_t HELPER(A2_addsat)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV=fSAT(fSE32_64(RsV)+fSE32_64(RtV)); }
    return RdV;
}

int32_t HELPER(A2_subsat)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV=fSAT(fSE32_64(RtV) - fSE32_64(RsV)); }
    return RdV;
}

int32_t HELPER(A2_addi)(int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    { fIMMEXT(siV); RdV=RsV+siV;}
    return RdV;
}

int32_t HELPER(C4_addipc)(int32_t uiV, target_ulong PC)
{
    int32_t RdV = 0;
    { RdV=fREAD_PC()+fIMMEXT(uiV);}
    return RdV;
}

int32_t HELPER(A2_addh_l16_ll)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=fSXTN(16,32,(fGETHALF(0,RtV)+fGETHALF(0,RsV)));}
    return RdV;
}

int32_t HELPER(A2_addh_l16_hl)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=fSXTN(16,32,(fGETHALF(0,RtV)+fGETHALF(1,RsV)));}
    return RdV;
}

int32_t HELPER(A2_addh_l16_sat_ll)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSATH(fGETHALF(0,RtV)+fGETHALF(0,RsV));}
    return RdV;
}

int32_t HELPER(A2_addh_l16_sat_hl)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSATH(fGETHALF(0,RtV)+fGETHALF(1,RsV));}
    return RdV;
}

int32_t HELPER(A2_subh_l16_ll)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=fSXTN(16,32,(fGETHALF(0,RtV)-fGETHALF(0,RsV)));}
    return RdV;
}

int32_t HELPER(A2_subh_l16_hl)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=fSXTN(16,32,(fGETHALF(0,RtV)-fGETHALF(1,RsV)));}
    return RdV;
}

int32_t HELPER(A2_subh_l16_sat_ll)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSATH(fGETHALF(0,RtV)-fGETHALF(0,RsV));}
    return RdV;
}

int32_t HELPER(A2_subh_l16_sat_hl)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=fSATH(fGETHALF(0,RtV)-fGETHALF(1,RsV));}
    return RdV;
}

int32_t HELPER(A2_addh_h16_ll)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=(fGETHALF(0,RtV)+fGETHALF(0,RsV))<<16;}
    return RdV;
}

int32_t HELPER(A2_addh_h16_lh)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=(fGETHALF(0,RtV)+fGETHALF(1,RsV))<<16;}
    return RdV;
}

int32_t HELPER(A2_addh_h16_hl)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=(fGETHALF(1,RtV)+fGETHALF(0,RsV))<<16;}
    return RdV;
}

int32_t HELPER(A2_addh_h16_hh)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=(fGETHALF(1,RtV)+fGETHALF(1,RsV))<<16;}
    return RdV;
}

int32_t HELPER(A2_addh_h16_sat_ll)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=(fSATH(fGETHALF(0,RtV)+fGETHALF(0,RsV)))<<16;}
    return RdV;
}

int32_t HELPER(A2_addh_h16_sat_lh)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=(fSATH(fGETHALF(0,RtV)+fGETHALF(1,RsV)))<<16;}
    return RdV;
}

int32_t HELPER(A2_addh_h16_sat_hl)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=(fSATH(fGETHALF(1,RtV)+fGETHALF(0,RsV)))<<16;}
    return RdV;
}

int32_t HELPER(A2_addh_h16_sat_hh)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=(fSATH(fGETHALF(1,RtV)+fGETHALF(1,RsV)))<<16;}
    return RdV;
}

int32_t HELPER(A2_subh_h16_ll)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=(fGETHALF(0,RtV)-fGETHALF(0,RsV))<<16;}
    return RdV;
}

int32_t HELPER(A2_subh_h16_lh)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=(fGETHALF(0,RtV)-fGETHALF(1,RsV))<<16;}
    return RdV;
}

int32_t HELPER(A2_subh_h16_hl)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=(fGETHALF(1,RtV)-fGETHALF(0,RsV))<<16;}
    return RdV;
}

int32_t HELPER(A2_subh_h16_hh)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV=(fGETHALF(1,RtV)-fGETHALF(1,RsV))<<16;}
    return RdV;
}

int32_t HELPER(A2_subh_h16_sat_ll)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=(fSATH(fGETHALF(0,RtV)-fGETHALF(0,RsV)))<<16;}
    return RdV;
}

int32_t HELPER(A2_subh_h16_sat_lh)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=(fSATH(fGETHALF(0,RtV)-fGETHALF(1,RsV)))<<16;}
    return RdV;
}

int32_t HELPER(A2_subh_h16_sat_hl)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=(fSATH(fGETHALF(1,RtV)-fGETHALF(0,RsV)))<<16;}
    return RdV;
}

int32_t HELPER(A2_subh_h16_sat_hh)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV=(fSATH(fGETHALF(1,RtV)-fGETHALF(1,RsV)))<<16;}
    return RdV;
}

int32_t HELPER(A2_aslh)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV=RsV<<16; }
    return RdV;
}

int32_t HELPER(A2_asrh)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV=RsV>>16; }
    return RdV;
}

int64_t HELPER(A2_addp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV=RssV+RttV;}
    return RddV;
}

int64_t HELPER(A2_addpsat)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fADDSAT64(RddV,RssV,RttV);}
    return RddV;
}

int64_t HELPER(A2_addspl)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV=RttV+fSXTN(32,64,fGETWORD(0,RssV));}
    return RddV;
}

int64_t HELPER(A2_addsph)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV=RttV+fSXTN(32,64,fGETWORD(1,RssV));}
    return RddV;
}

int64_t HELPER(A2_subp)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { RddV=RttV-RssV;}
    return RddV;
}

int32_t HELPER(A2_negsat)(CPUHexagonState *env, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT(-fCAST8s(RsV)); }
    return RdV;
}

int32_t HELPER(A2_abs)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV = fABS(RsV); }
    return RdV;
}

int32_t HELPER(A2_abssat)(CPUHexagonState *env, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT(fABS(fCAST4_8s(RsV))); }
    return RdV;
}

int64_t HELPER(A2_vconj)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETHALF(1,RddV,fSATN(16,-fGETHALF(1,RssV))); fSETHALF(0,RddV,fGETHALF(0,RssV)); fSETHALF(3,RddV,fSATN(16,-fGETHALF(3,RssV))); fSETHALF(2,RddV,fGETHALF(2,RssV)); }
    return RddV;
}

int64_t HELPER(A2_negp)(int64_t RssV)
{
    int64_t RddV = 0;
    { RddV = -RssV; }
    return RddV;
}

int64_t HELPER(A2_absp)(int64_t RssV)
{
    int64_t RddV = 0;
    { RddV = fABS(RssV); }
    return RddV;
}

int32_t HELPER(A2_max)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV = fMAX(RsV,RtV); }
    return RdV;
}

int32_t HELPER(A2_maxu)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV = fMAX(fCAST4u(RsV),fCAST4u(RtV)); }
    return RdV;
}

int32_t HELPER(A2_min)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    { RdV = fMIN(RtV,RsV); }
    return RdV;
}

int32_t HELPER(A2_minu)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    { RdV = fMIN(fCAST4u(RtV),fCAST4u(RsV)); }
    return RdV;
}

int64_t HELPER(A2_maxp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fMAX(RssV,RttV); }
    return RddV;
}

int64_t HELPER(A2_maxup)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = fMAX(fCAST8u(RssV),fCAST8u(RttV)); }
    return RddV;
}

int64_t HELPER(A2_minp)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { RddV = fMIN(RttV,RssV); }
    return RddV;
}

int64_t HELPER(A2_minup)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { RddV = fMIN(fCAST8u(RttV),fCAST8u(RssV)); }
    return RddV;
}

void HELPER(A4_ext)(int32_t uiV)
{
    { fHIDE(); }
}

int32_t HELPER(A2_tfr)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV=RsV;}
    return RdV;
}

int32_t HELPER(A2_tfrsi)(int32_t siV)
{
    int32_t RdV = 0;
    { fIMMEXT(siV); RdV=siV;}
    return RdV;
}

int32_t HELPER(A2_sxtb)(int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = fSXTN(8,32,RsV);}
    return RdV;
}

int32_t HELPER(A2_zxth)(int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = fZXTN(16,32,RsV);}
    return RdV;
}

int32_t HELPER(A2_sxth)(int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = fSXTN(16,32,RsV);}
    return RdV;
}

int64_t HELPER(A2_combinew)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,RtV); fSETWORD(1,RddV,RsV); }
    return RddV;
}

int64_t HELPER(A4_combineri)(int32_t RsV, int32_t siV)
{
    int64_t RddV = 0;
    { fIMMEXT(siV); fSETWORD(0,RddV,siV); fSETWORD(1,RddV,RsV); }
    return RddV;
}

int64_t HELPER(A4_combineir)(int32_t RsV, int32_t siV)
{
    int64_t RddV = 0;
    { fIMMEXT(siV); fSETWORD(0,RddV,RsV); fSETWORD(1,RddV,siV); }
    return RddV;
}

int64_t HELPER(A2_combineii)(int32_t siV, int32_t SiV)
{
    int64_t RddV = 0;
    { fIMMEXT(siV); fSETWORD(0,RddV,SiV); fSETWORD(1,RddV,siV); }
    return RddV;
}

int64_t HELPER(A4_combineii)(int32_t siV, int32_t UiV)
{
    int64_t RddV = 0;
    { fIMMEXT(UiV); fSETWORD(0,RddV,UiV); fSETWORD(1,RddV,siV); }
    return RddV;
}

int32_t HELPER(A2_combine_hh)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = (fGETUHALF(1,RtV)<<16) | fGETUHALF(1,RsV);}
    return RdV;
}

int32_t HELPER(A2_combine_hl)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = (fGETUHALF(1,RtV)<<16) | fGETUHALF(0,RsV);}
    return RdV;
}

int32_t HELPER(A2_combine_lh)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = (fGETUHALF(0,RtV)<<16) | fGETUHALF(1,RsV);}
    return RdV;
}

int32_t HELPER(A2_combine_ll)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = (fGETUHALF(0,RtV)<<16) | fGETUHALF(0,RsV);}
    return RdV;
}

int32_t HELPER(A2_tfril)(int32_t RxV, int32_t uiV)
{
    { fSETHALF(0,RxV,uiV);}
    return RxV;
}

int32_t HELPER(A2_tfrih)(int32_t RxV, int32_t uiV)
{
    { fSETHALF(1,RxV,uiV);}
    return RxV;
}

int32_t HELPER(A2_tfrcrr)(int32_t CsV)
{
    int32_t RdV = 0;
    { RdV=CsV;}
    return RdV;
}

int32_t HELPER(A2_tfrrcr)(int32_t RsV)
{
    int32_t CdV = 0;
    { CdV=RsV;}
    return CdV;
}

int64_t HELPER(A4_tfrcpp)(int64_t CssV)
{
    int64_t RddV = 0;
    { RddV=CssV;}
    return RddV;
}

int64_t HELPER(A4_tfrpcp)(int64_t RssV)
{
    int64_t CddV = 0;
    { CddV=RssV;}
    return CddV;
}

int32_t HELPER(A2_and)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV=RsV&RtV;}
    return RdV;
}

int32_t HELPER(A2_or)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV=RsV|RtV;}
    return RdV;
}

int32_t HELPER(A2_xor)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV=RsV^RtV;}
    return RdV;
}

int32_t HELPER(M2_xor_xacc)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV^=RsV^RtV;}
    return RxV;
}

int64_t HELPER(M4_xor_xacc)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV^=RssV^RttV;}
    return RxxV;
}

int32_t HELPER(A4_andn)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    { RdV = (RtV & ~RsV); }
    return RdV;
}

int32_t HELPER(A4_orn)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    { RdV = (RtV | ~RsV); }
    return RdV;
}

int64_t HELPER(A4_andnp)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { RddV = (RttV & ~RssV); }
    return RddV;
}

int64_t HELPER(A4_ornp)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { RddV = (RttV | ~RssV); }
    return RddV;
}

int32_t HELPER(S4_addaddi)(int32_t RsV, int32_t RuV, int32_t siV)
{
    int32_t RdV = 0;
    { RdV = RsV + RuV + fIMMEXT(siV); }
    return RdV;
}

int32_t HELPER(S4_subaddi)(int32_t RsV, int32_t RuV, int32_t siV)
{
    int32_t RdV = 0;
    { RdV = RsV - RuV + fIMMEXT(siV); }
    return RdV;
}

int32_t HELPER(M4_and_and)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV &= (RsV & RtV); }
    return RxV;
}

int32_t HELPER(M4_and_andn)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV &= (RsV & ~RtV); }
    return RxV;
}

int32_t HELPER(M4_and_or)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV &= (RsV | RtV); }
    return RxV;
}

int32_t HELPER(M4_and_xor)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV &= (RsV ^ RtV); }
    return RxV;
}

int32_t HELPER(M4_or_and)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV |= (RsV & RtV); }
    return RxV;
}

int32_t HELPER(M4_or_andn)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV |= (RsV & ~RtV); }
    return RxV;
}

int32_t HELPER(M4_or_or)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV |= (RsV | RtV); }
    return RxV;
}

int32_t HELPER(M4_or_xor)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV |= (RsV ^ RtV); }
    return RxV;
}

int32_t HELPER(S4_or_andix)(int32_t RxV, int32_t RuV, int32_t siV)
{
    { RxV = RuV | (RxV & fIMMEXT(siV)); }
    return RxV;
}

int32_t HELPER(S4_or_andi)(int32_t RxV, int32_t RsV, int32_t siV)
{
    { RxV = RxV | (RsV & fIMMEXT(siV)); }
    return RxV;
}

int32_t HELPER(S4_or_ori)(int32_t RxV, int32_t RsV, int32_t siV)
{
    { RxV = RxV | (RsV | fIMMEXT(siV)); }
    return RxV;
}

int32_t HELPER(M4_xor_and)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV ^= (RsV & RtV); }
    return RxV;
}

int32_t HELPER(M4_xor_or)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV ^= (RsV | RtV); }
    return RxV;
}

int32_t HELPER(M4_xor_andn)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { RxV ^= (RsV & ~RtV); }
    return RxV;
}

int32_t HELPER(A2_subri)(int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    { fIMMEXT(siV); RdV=siV-RsV;}
    return RdV;
}

int32_t HELPER(A2_andir)(int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    { fIMMEXT(siV); RdV=RsV&siV;}
    return RdV;
}

int32_t HELPER(A2_orir)(int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    { fIMMEXT(siV); RdV=RsV|siV;}
    return RdV;
}

int64_t HELPER(A2_andp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV=RssV&RttV;}
    return RddV;
}

int64_t HELPER(A2_orp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV=RssV|RttV;}
    return RddV;
}

int64_t HELPER(A2_xorp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV=RssV^RttV;}
    return RddV;
}

int64_t HELPER(A2_notp)(int64_t RssV)
{
    int64_t RddV = 0;
    { RddV=~RssV;}
    return RddV;
}

int64_t HELPER(A2_sxtw)(int32_t RsV)
{
    int64_t RddV = 0;
    { RddV = fCAST4_8s(RsV); }
    return RddV;
}

int32_t HELPER(A2_sat)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT(RssV); }
    return RdV;
}

int32_t HELPER(A2_roundsat)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(size8s_t tmp;) fADDSAT64(tmp,RssV,0x080000000ULL); RdV = fGETWORD(1,tmp); }
    return RdV;
}

int32_t HELPER(A2_sath)(CPUHexagonState *env, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSATH(RsV); }
    return RdV;
}

int32_t HELPER(A2_satuh)(CPUHexagonState *env, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSATUH(RsV); }
    return RdV;
}

int32_t HELPER(A2_satub)(CPUHexagonState *env, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSATUB(RsV); }
    return RdV;
}

int32_t HELPER(A2_satb)(CPUHexagonState *env, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSATB(RsV); }
    return RdV;
}

int64_t HELPER(A2_vaddub)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,(fGETUBYTE(i,RssV)+fGETUBYTE(i,RttV))); } }
    return RddV;
}

int64_t HELPER(A2_vaddubs)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,fSATUN(8,fGETUBYTE(i,RssV)+fGETUBYTE(i,RttV))); } }
    return RddV;
}

int64_t HELPER(A2_vaddh)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fGETHALF(i,RssV)+fGETHALF(i,RttV)); } }
    return RddV;
}

int64_t HELPER(A2_vaddhs)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATN(16,fGETHALF(i,RssV)+fGETHALF(i,RttV))); } }
    return RddV;
}

int64_t HELPER(A2_vadduhs)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATUN(16,fGETUHALF(i,RssV)+fGETUHALF(i,RttV))); } }
    return RddV;
}

int32_t HELPER(A5_vaddhubs)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RdV,fSATUB(fGETHALF(i,RssV)+fGETHALF(i,RttV))); } }
    return RdV;
}

int64_t HELPER(A2_vaddw)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fGETWORD(i,RssV)+fGETWORD(i,RttV)); } }
    return RddV;
}

int64_t HELPER(A2_vaddws)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fSATN(32,fGETWORD(i,RssV)+fGETWORD(i,RttV))); } }
    return RddV;
}

int64_t HELPER(S4_vxaddsubw)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fGETWORD(0,RssV)+fGETWORD(1,RttV))); fSETWORD(1,RddV,fSAT(fGETWORD(1,RssV)-fGETWORD(0,RttV))); }
    return RddV;
}

int64_t HELPER(S4_vxsubaddw)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,fSAT(fGETWORD(0,RssV)-fGETWORD(1,RttV))); fSETWORD(1,RddV,fSAT(fGETWORD(1,RssV)+fGETWORD(0,RttV))); }
    return RddV;
}

int64_t HELPER(S4_vxaddsubh)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,fSATH(fGETHALF(0,RssV)+fGETHALF(1,RttV))); fSETHALF(1,RddV,fSATH(fGETHALF(1,RssV)-fGETHALF(0,RttV))); fSETHALF(2,RddV,fSATH(fGETHALF(2,RssV)+fGETHALF(3,RttV))); fSETHALF(3,RddV,fSATH(fGETHALF(3,RssV)-fGETHALF(2,RttV))); }
    return RddV;
}

int64_t HELPER(S4_vxsubaddh)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,fSATH(fGETHALF(0,RssV)-fGETHALF(1,RttV))); fSETHALF(1,RddV,fSATH(fGETHALF(1,RssV)+fGETHALF(0,RttV))); fSETHALF(2,RddV,fSATH(fGETHALF(2,RssV)-fGETHALF(3,RttV))); fSETHALF(3,RddV,fSATH(fGETHALF(3,RssV)+fGETHALF(2,RttV))); }
    return RddV;
}

int64_t HELPER(S4_vxaddsubhr)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,fSATH((fGETHALF(0,RssV)+fGETHALF(1,RttV)+1)>>1)); fSETHALF(1,RddV,fSATH((fGETHALF(1,RssV)-fGETHALF(0,RttV)+1)>>1)); fSETHALF(2,RddV,fSATH((fGETHALF(2,RssV)+fGETHALF(3,RttV)+1)>>1)); fSETHALF(3,RddV,fSATH((fGETHALF(3,RssV)-fGETHALF(2,RttV)+1)>>1)); }
    return RddV;
}

int64_t HELPER(S4_vxsubaddhr)(CPUHexagonState *env, int64_t RssV, int64_t RttV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,fSATH((fGETHALF(0,RssV)-fGETHALF(1,RttV)+1)>>1)); fSETHALF(1,RddV,fSATH((fGETHALF(1,RssV)+fGETHALF(0,RttV)+1)>>1)); fSETHALF(2,RddV,fSATH((fGETHALF(2,RssV)-fGETHALF(3,RttV)+1)>>1)); fSETHALF(3,RddV,fSATH((fGETHALF(3,RssV)+fGETHALF(2,RttV)+1)>>1)); }
    return RddV;
}

int32_t HELPER(A2_svavgh)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,((fGETHALF(i,RsV)+fGETHALF(i,RtV))>>1)); } }
    return RdV;
}

int32_t HELPER(A2_svavghs)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,((fGETHALF(i,RsV)+fGETHALF(i,RtV)+1)>>1)); } }
    return RdV;
}

int32_t HELPER(A2_svnavgh)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,((fGETHALF(i,RtV)-fGETHALF(i,RsV))>>1)); } }
    return RdV;
}

int32_t HELPER(A2_svaddh)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fGETHALF(i,RsV)+fGETHALF(i,RtV)); } }
    return RdV;
}

int32_t HELPER(A2_svaddhs)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fSATN(16,fGETHALF(i,RsV)+fGETHALF(i,RtV))); } }
    return RdV;
}

int32_t HELPER(A2_svadduhs)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fSATUN(16,fGETUHALF(i,RsV)+fGETUHALF(i,RtV))); } }
    return RdV;
}

int32_t HELPER(A2_svsubh)(int32_t RtV, int32_t RsV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fGETHALF(i,RtV)-fGETHALF(i,RsV)); } }
    return RdV;
}

int32_t HELPER(A2_svsubhs)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fSATN(16,fGETHALF(i,RtV)-fGETHALF(i,RsV))); } }
    return RdV;
}

int32_t HELPER(A2_svsubuhs)(CPUHexagonState *env, int32_t RtV, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fSATUN(16,fGETUHALF(i,RtV)-fGETUHALF(i,RsV))); } }
    return RdV;
}

int64_t HELPER(A2_vraddub)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) RddV = 0; for (i=0;i<4;i++) { fSETWORD(0,RddV,(fGETWORD(0,RddV) + (fGETUBYTE(i,RssV)+fGETUBYTE(i,RttV)))); } for (i=4;i<8;i++) { fSETWORD(1,RddV,(fGETWORD(1,RddV) + (fGETUBYTE(i,RssV)+fGETUBYTE(i,RttV)))); } }
    return RddV;
}

int64_t HELPER(A2_vraddub_acc)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETWORD(0,RxxV,(fGETWORD(0,RxxV) + (fGETUBYTE(i,RssV)+fGETUBYTE(i,RttV)))); } for (i = 4; i < 8; i++) { fSETWORD(1,RxxV,(fGETWORD(1,RxxV) + (fGETUBYTE(i,RssV)+fGETUBYTE(i,RttV)))); } }
    return RxxV;
}

int32_t HELPER(M2_vraddh)(int64_t RssV, int64_t RttV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) RdV = 0; for (i=0;i<4;i++) { RdV += (fGETHALF(i,RssV)+fGETHALF(i,RttV)); } }
    return RdV;
}

int32_t HELPER(M2_vradduh)(int64_t RssV, int64_t RttV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) RdV = 0; for (i=0;i<4;i++) { RdV += (fGETUHALF(i,RssV)+fGETUHALF(i,RttV)); } }
    return RdV;
}

int64_t HELPER(A2_vsubub)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,(fGETUBYTE(i,RttV)-fGETUBYTE(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vsububs)(CPUHexagonState *env, int64_t RttV, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,fSATUN(8,fGETUBYTE(i,RttV)-fGETUBYTE(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vsubh)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fGETHALF(i,RttV)-fGETHALF(i,RssV)); } }
    return RddV;
}

int64_t HELPER(A2_vsubhs)(CPUHexagonState *env, int64_t RttV, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATN(16,fGETHALF(i,RttV)-fGETHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vsubuhs)(CPUHexagonState *env, int64_t RttV, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATUN(16,fGETUHALF(i,RttV)-fGETUHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vsubw)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fGETWORD(i,RttV)-fGETWORD(i,RssV)); } }
    return RddV;
}

int64_t HELPER(A2_vsubws)(CPUHexagonState *env, int64_t RttV, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fSATN(32,fGETWORD(i,RttV)-fGETWORD(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vabsh)(int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fABS(fGETHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vabshsat)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATH(fABS(fGETHALF(i,RssV)))); } }
    return RddV;
}

int64_t HELPER(A2_vabsw)(int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fABS(fGETWORD(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vabswsat)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fSAT(fABS(fGETWORD(i,RssV)))); } }
    return RddV;
}

int64_t HELPER(M2_vabsdiffw)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fABS(fGETWORD(i,RttV) - fGETWORD(i,RssV))); } }
    return RddV;
}

int64_t HELPER(M2_vabsdiffh)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fABS(fGETHALF(i,RttV) - fGETHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(M6_vabsdiffb)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<8;i++) { fSETBYTE(i,RddV,fABS(fGETBYTE(i,RttV) - fGETBYTE(i,RssV))); } }
    return RddV;
}

int64_t HELPER(M6_vabsdiffub)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<8;i++) { fSETBYTE(i,RddV,fABS(fGETUBYTE(i,RttV) - fGETUBYTE(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vrsadub)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) RddV = 0; for (i = 0; i < 4; i++) { fSETWORD(0,RddV,(fGETWORD(0,RddV) + fABS((fGETUBYTE(i,RssV) - fGETUBYTE(i,RttV))))); } for (i = 4; i < 8; i++) { fSETWORD(1,RddV,(fGETWORD(1,RddV) + fABS((fGETUBYTE(i,RssV) - fGETUBYTE(i,RttV))))); } }
    return RddV;
}

int64_t HELPER(A2_vrsadub_acc)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETWORD(0,RxxV,(fGETWORD(0,RxxV) + fABS((fGETUBYTE(i,RssV) - fGETUBYTE(i,RttV))))); } for (i = 4; i < 8; i++) { fSETWORD(1,RxxV,(fGETWORD(1,RxxV) + fABS((fGETUBYTE(i,RssV) - fGETUBYTE(i,RttV))))); } }
    return RxxV;
}

int64_t HELPER(A2_vavgub)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,((fGETUBYTE(i,RssV) + fGETUBYTE(i,RttV))>>1)); } }
    return RddV;
}

int64_t HELPER(A2_vavguh)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,(fGETUHALF(i,RssV)+fGETUHALF(i,RttV))>>1); } }
    return RddV;
}

int64_t HELPER(A2_vavgh)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,(fGETHALF(i,RssV)+fGETHALF(i,RttV))>>1); } }
    return RddV;
}

int64_t HELPER(A2_vnavgh)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,(fGETHALF(i,RttV)-fGETHALF(i,RssV))>>1); } }
    return RddV;
}

int64_t HELPER(A2_vavgw)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fSXTN(32,33,fGETWORD(i,RssV))+fSXTN(32,33,fGETWORD(i,RttV)))>>1); } }
    return RddV;
}

int64_t HELPER(A2_vnavgw)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fSXTN(32,33,fGETWORD(i,RttV))-fSXTN(32,33,fGETWORD(i,RssV)))>>1); } }
    return RddV;
}

int64_t HELPER(A2_vavgwr)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fSXTN(32,33,fGETWORD(i,RssV))+fSXTN(32,33,fGETWORD(i,RttV))+1)>>1); } }
    return RddV;
}

int64_t HELPER(A2_vnavgwr)(CPUHexagonState *env, int64_t RttV, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fSAT((fSXTN(32,33,fGETWORD(i,RttV))-fSXTN(32,33,fGETWORD(i,RssV))+1)>>1)); } }
    return RddV;
}

int64_t HELPER(A2_vavgwcr)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fCRND(fSXTN(32,33,fGETWORD(i,RssV))+fSXTN(32,33,fGETWORD(i,RttV)))>>1)); } }
    return RddV;
}

int64_t HELPER(A2_vnavgwcr)(CPUHexagonState *env, int64_t RttV, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fSAT(fCRND(fSXTN(32,33,fGETWORD(i,RttV))-fSXTN(32,33,fGETWORD(i,RssV)))>>1)); } }
    return RddV;
}

int64_t HELPER(A2_vavghcr)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fCRND(fGETHALF(i,RssV)+fGETHALF(i,RttV))>>1); } }
    return RddV;
}

int64_t HELPER(A2_vnavghcr)(CPUHexagonState *env, int64_t RttV, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATH(fCRND(fGETHALF(i,RttV)-fGETHALF(i,RssV))>>1)); } }
    return RddV;
}

int64_t HELPER(A2_vavguw)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fZXTN(32,33,fGETUWORD(i,RssV))+fZXTN(32,33,fGETUWORD(i,RttV)))>>1); } }
    return RddV;
}

int64_t HELPER(A2_vavguwr)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fZXTN(32,33,fGETUWORD(i,RssV))+fZXTN(32,33,fGETUWORD(i,RttV))+1)>>1); } }
    return RddV;
}

int64_t HELPER(A2_vavgubr)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,((fGETUBYTE(i,RssV)+fGETUBYTE(i,RttV)+1)>>1)); } }
    return RddV;
}

int64_t HELPER(A2_vavguhr)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,(fGETUHALF(i,RssV)+fGETUHALF(i,RttV)+1)>>1); } }
    return RddV;
}

int64_t HELPER(A2_vavghr)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,(fGETHALF(i,RssV)+fGETHALF(i,RttV)+1)>>1); } }
    return RddV;
}

int64_t HELPER(A2_vnavghr)(CPUHexagonState *env, int64_t RttV, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATH((fGETHALF(i,RttV)-fGETHALF(i,RssV)+1)>>1)); } }
    return RddV;
}

int32_t HELPER(A4_round_ri)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    {RdV = fRNDN(RsV,uiV)>>uiV; }
    return RdV;
}

int32_t HELPER(A4_round_rr)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV = fRNDN(RsV,fZXTN(5,32,RtV))>>fZXTN(5,32,RtV); }
    return RdV;
}

int32_t HELPER(A4_round_ri_sat)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV = (fSAT(fRNDN(RsV,uiV)))>>uiV; }
    return RdV;
}

int32_t HELPER(A4_round_rr_sat)(CPUHexagonState *env, int32_t RsV, int32_t RtV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    {RdV = (fSAT(fRNDN(RsV,fZXTN(5,32,RtV))))>>fZXTN(5,32,RtV); }
    return RdV;
}

int32_t HELPER(A4_cround_ri)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    {RdV = fCRNDN(RsV,uiV); }
    return RdV;
}

int32_t HELPER(A4_cround_rr)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    {RdV = fCRNDN(RsV,fZXTN(5,32,RtV)); }
    return RdV;
}

int64_t HELPER(A7_croundd_ri)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(size16s_t rndbit_128;) fHIDE(size16s_t tmp128;) fHIDE(size16s_t src_128;) if (uiV == 0) { RddV = RssV; } else if ((RssV & (size8s_t)((1LL << (uiV - 1)) - 1LL)) == 0) { src_128 = fCAST8S_16S(RssV); rndbit_128 = fCAST8S_16S(1LL); rndbit_128 = fSHIFTL128(rndbit_128, uiV); rndbit_128 = fAND128(rndbit_128, src_128); rndbit_128 = fSHIFTR128(rndbit_128, 1); tmp128 = fADD128(src_128, rndbit_128); tmp128 = fSHIFTR128(tmp128, uiV); RddV = fCAST16S_8S(tmp128); } else { rndbit_128 = fCAST8S_16S((1LL << (uiV - 1))); src_128 = fCAST8S_16S(RssV); tmp128 = fADD128(src_128, rndbit_128); tmp128 = fSHIFTR128(tmp128, uiV); RddV = fCAST16S_8S(tmp128); }; }
    return RddV;
}

int64_t HELPER(A7_croundd_rr)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(size16s_t rndbit_128;) fHIDE(size16s_t tmp128;) fHIDE(size16s_t src_128;) if (fZXTN(6,32,RtV) == 0) { RddV = RssV; } else if ((RssV & (size8s_t)((1LL << (fZXTN(6,32,RtV) - 1)) - 1LL)) == 0) { src_128 = fCAST8S_16S(RssV); rndbit_128 = fCAST8S_16S(1LL); rndbit_128 = fSHIFTL128(rndbit_128, fZXTN(6,32,RtV)); rndbit_128 = fAND128(rndbit_128, src_128); rndbit_128 = fSHIFTR128(rndbit_128, 1); tmp128 = fADD128(src_128, rndbit_128); tmp128 = fSHIFTR128(tmp128, fZXTN(6,32,RtV)); RddV = fCAST16S_8S(tmp128); } else { rndbit_128 = fCAST8S_16S((1LL << (fZXTN(6,32,RtV) - 1))); src_128 = fCAST8S_16S(RssV); tmp128 = fADD128(src_128, rndbit_128); tmp128 = fSHIFTR128(tmp128, fZXTN(6,32,RtV)); RddV = fCAST16S_8S(tmp128); }; }
    return RddV;
}

int32_t HELPER(A7_clip)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { fCLIP(RdV,RsV,uiV);}
    return RdV;
}

int64_t HELPER(A7_vclip)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(size4s_t tmp;) fCLIP(tmp, fGETWORD(0, RssV), uiV); fSETWORD(0, RddV, tmp); fCLIP(tmp,fGETWORD(1, RssV), uiV); fSETWORD(1, RddV, tmp); }
    return RddV;
}

int64_t HELPER(A4_vrminh)(int64_t RxxV, int64_t RssV, int32_t RuV)
{
    { fHIDE(int i; size8s_t min; size4s_t addr;) min = fGETHALF(0,RxxV); addr = fGETWORD(1,RxxV); for (i = 0; i < 4; i++) { if (min > fGETHALF(i,RssV)) { min = fGETHALF(i,RssV); addr = RuV | i<<1; } } fSETWORD(0,RxxV,min); fSETWORD(1,RxxV,addr); }
    return RxxV;
}

int64_t HELPER(A4_vrmaxh)(int64_t RxxV, int64_t RssV, int32_t RuV)
{
    { fHIDE(int i; size8s_t max; size4s_t addr;) max = fGETHALF(0,RxxV); addr = fGETWORD(1,RxxV); for (i = 0; i < 4; i++) { if (max < fGETHALF(i,RssV)) { max = fGETHALF(i,RssV); addr = RuV | i<<1; } } fSETWORD(0,RxxV,max); fSETWORD(1,RxxV,addr); }
    return RxxV;
}

int64_t HELPER(A4_vrminuh)(int64_t RxxV, int64_t RssV, int32_t RuV)
{
    { fHIDE(int i; size8s_t min; size4s_t addr;) min = fGETUHALF(0,RxxV); addr = fGETWORD(1,RxxV); for (i = 0; i < 4; i++) { if (min > fGETUHALF(i,RssV)) { min = fGETUHALF(i,RssV); addr = RuV | i<<1; } } fSETWORD(0,RxxV,min); fSETWORD(1,RxxV,addr); }
    return RxxV;
}

int64_t HELPER(A4_vrmaxuh)(int64_t RxxV, int64_t RssV, int32_t RuV)
{
    { fHIDE(int i; size8s_t max; size4s_t addr;) max = fGETUHALF(0,RxxV); addr = fGETWORD(1,RxxV); for (i = 0; i < 4; i++) { if (max < fGETUHALF(i,RssV)) { max = fGETUHALF(i,RssV); addr = RuV | i<<1; } } fSETWORD(0,RxxV,max); fSETWORD(1,RxxV,addr); }
    return RxxV;
}

int64_t HELPER(A4_vrminw)(int64_t RxxV, int64_t RssV, int32_t RuV)
{
    { fHIDE(int i; size8s_t min; size4s_t addr;) min = fGETWORD(0,RxxV); addr = fGETWORD(1,RxxV); for (i = 0; i < 2; i++) { if (min > fGETWORD(i,RssV)) { min = fGETWORD(i,RssV); addr = RuV | i<<2; } } fSETWORD(0,RxxV,min); fSETWORD(1,RxxV,addr); }
    return RxxV;
}

int64_t HELPER(A4_vrmaxw)(int64_t RxxV, int64_t RssV, int32_t RuV)
{
    { fHIDE(int i; size8s_t max; size4s_t addr;) max = fGETWORD(0,RxxV); addr = fGETWORD(1,RxxV); for (i = 0; i < 2; i++) { if (max < fGETWORD(i,RssV)) { max = fGETWORD(i,RssV); addr = RuV | i<<2; } } fSETWORD(0,RxxV,max); fSETWORD(1,RxxV,addr); }
    return RxxV;
}

int64_t HELPER(A4_vrminuw)(int64_t RxxV, int64_t RssV, int32_t RuV)
{
    { fHIDE(int i; size8s_t min; size4s_t addr;) min = fGETUWORD(0,RxxV); addr = fGETWORD(1,RxxV); for (i = 0; i < 2; i++) { if (min > fGETUWORD(i,RssV)) { min = fGETUWORD(i,RssV); addr = RuV | i<<2; } } fSETWORD(0,RxxV,min); fSETWORD(1,RxxV,addr); }
    return RxxV;
}

int64_t HELPER(A4_vrmaxuw)(int64_t RxxV, int64_t RssV, int32_t RuV)
{
    { fHIDE(int i; size8s_t max; size4s_t addr;) max = fGETUWORD(0,RxxV); addr = fGETWORD(1,RxxV); for (i = 0; i < 2; i++) { if (max < fGETUWORD(i,RssV)) { max = fGETUWORD(i,RssV); addr = RuV | i<<2; } } fSETWORD(0,RxxV,max); fSETWORD(1,RxxV,addr); }
    return RxxV;
}

int64_t HELPER(A2_vminb)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,fMIN(fGETBYTE(i,RttV),fGETBYTE(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vmaxb)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,fMAX(fGETBYTE(i,RttV),fGETBYTE(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vminub)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,fMIN(fGETUBYTE(i,RttV),fGETUBYTE(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vmaxub)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 8; i++) { fSETBYTE(i,RddV,fMAX(fGETUBYTE(i,RttV),fGETUBYTE(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vminh)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETHALF(i,RddV,fMIN(fGETHALF(i,RttV),fGETHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vmaxh)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETHALF(i,RddV,fMAX(fGETHALF(i,RttV),fGETHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vminuh)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETHALF(i,RddV,fMIN(fGETUHALF(i,RttV),fGETUHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vmaxuh)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 4; i++) { fSETHALF(i,RddV,fMAX(fGETUHALF(i,RttV),fGETUHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vminw)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 2; i++) { fSETWORD(i,RddV,fMIN(fGETWORD(i,RttV),fGETWORD(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vmaxw)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 2; i++) { fSETWORD(i,RddV,fMAX(fGETWORD(i,RttV),fGETWORD(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vminuw)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 2; i++) { fSETWORD(i,RddV,fMIN(fGETUWORD(i,RttV),fGETUWORD(i,RssV))); } }
    return RddV;
}

int64_t HELPER(A2_vmaxuw)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i = 0; i < 2; i++) { fSETWORD(i,RddV,fMAX(fGETUWORD(i,RttV),fGETUWORD(i,RssV))); } }
    return RddV;
}

int32_t HELPER(A4_modwrapu)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { if (RsV < 0) { RdV = RsV + fCAST4u(RtV); } else if (fCAST4u(RsV) >= fCAST4u(RtV)) { RdV = RsV - fCAST4u(RtV); } else { RdV = RsV; } }
    return RdV;
}

int32_t HELPER(F2_sfimm_p)(int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = (127 - 6) << 23; RdV += uiV << 17; }
    return RdV;
}

int32_t HELPER(F2_sfimm_n)(int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = (127 - 6) << 23; RdV += (uiV << 17); RdV |= (1 << 31); }
    return RdV;
}

int64_t HELPER(F2_dfmpyll)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(size8u_t prod;) prod = fMPY32UU(fGETUWORD(0,RssV),fGETUWORD(0,RttV)); RddV = (prod >> 32) << 1; if (fGETUWORD(0,prod) != 0) fSETBIT(0,RddV,1); }
    return RddV;
}

int64_t HELPER(F2_dfmpylh)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { RxxV += (fGETUWORD(0,RssV) * (0x00100000 | fZXTN(20,64,fGETUWORD(1,RttV)))) << 1; }
    return RxxV;
}

int64_t HELPER(F2_dfimm_p)(int32_t uiV)
{
    int64_t RddV = 0;
    { RddV = (1023ULL - 6) << 52; RddV += (fHIDE((size8u_t))uiV) << 46; }
    return RddV;
}

int64_t HELPER(F2_dfimm_n)(int32_t uiV)
{
    int64_t RddV = 0;
    { RddV = (1023ULL - 6) << 52; RddV += (fHIDE((size8u_t))uiV) << 46; RddV |= ((1ULL) << 63); }
    return RddV;
}

int32_t HELPER(S2_asr_r_r)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RdV = fECHO( fBIDIR_ASHIFTR(RsV,shamt,4_8)); }
    return RdV;
}

int32_t HELPER(S2_asl_r_r)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RdV = fECHO( fBIDIR_ASHIFTL(RsV,shamt,4_8)); }
    return RdV;
}

int32_t HELPER(S2_lsr_r_r)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RdV = fECHO( fBIDIR_LSHIFTR(RsV,shamt,4_8)); }
    return RdV;
}

int32_t HELPER(S2_lsl_r_r)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RdV = fECHO( fBIDIR_LSHIFTL(RsV,shamt,4_8)); }
    return RdV;
}

int64_t HELPER(S2_asr_r_p)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RddV = fECHO( fBIDIR_ASHIFTR(RssV,shamt,8_8)); }
    return RddV;
}

int64_t HELPER(S2_asl_r_p)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RddV = fECHO( fBIDIR_ASHIFTL(RssV,shamt,8_8)); }
    return RddV;
}

int64_t HELPER(S2_lsr_r_p)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RddV = fECHO( fBIDIR_LSHIFTR(RssV,shamt,8_8)); }
    return RddV;
}

int64_t HELPER(S2_lsl_r_p)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RddV = fECHO( fBIDIR_LSHIFTL(RssV,shamt,8_8)); }
    return RddV;
}

int32_t HELPER(S2_asr_r_r_acc)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV + fBIDIR_ASHIFTR(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_asl_r_r_acc)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV + fBIDIR_ASHIFTL(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_lsr_r_r_acc)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV + fBIDIR_LSHIFTR(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_lsl_r_r_acc)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV + fBIDIR_LSHIFTL(RsV,shamt,4_8)); }
    return RxV;
}

int64_t HELPER(S2_asr_r_p_acc)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV + fBIDIR_ASHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_r_p_acc)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV + fBIDIR_ASHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_r_p_acc)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV + fBIDIR_LSHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsl_r_p_acc)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV + fBIDIR_LSHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int32_t HELPER(S2_asr_r_r_nac)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV - fBIDIR_ASHIFTR(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_asl_r_r_nac)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV - fBIDIR_ASHIFTL(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_lsr_r_r_nac)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV - fBIDIR_LSHIFTR(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_lsl_r_r_nac)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV - fBIDIR_LSHIFTL(RsV,shamt,4_8)); }
    return RxV;
}

int64_t HELPER(S2_asr_r_p_nac)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV - fBIDIR_ASHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_r_p_nac)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV - fBIDIR_ASHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_r_p_nac)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV - fBIDIR_LSHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsl_r_p_nac)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV - fBIDIR_LSHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int32_t HELPER(S2_asr_r_r_and)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV & fBIDIR_ASHIFTR(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_asl_r_r_and)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV & fBIDIR_ASHIFTL(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_lsr_r_r_and)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV & fBIDIR_LSHIFTR(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_lsl_r_r_and)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV & fBIDIR_LSHIFTL(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_asr_r_r_or)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV | fBIDIR_ASHIFTR(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_asl_r_r_or)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV | fBIDIR_ASHIFTL(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_lsr_r_r_or)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV | fBIDIR_LSHIFTR(RsV,shamt,4_8)); }
    return RxV;
}

int32_t HELPER(S2_lsl_r_r_or)(int32_t RxV, int32_t RsV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxV = fECHO(RxV | fBIDIR_LSHIFTL(RsV,shamt,4_8)); }
    return RxV;
}

int64_t HELPER(S2_asr_r_p_and)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV & fBIDIR_ASHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_r_p_and)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV & fBIDIR_ASHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_r_p_and)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV & fBIDIR_LSHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsl_r_p_and)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV & fBIDIR_LSHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asr_r_p_or)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV | fBIDIR_ASHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_r_p_or)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV | fBIDIR_ASHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_r_p_or)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV | fBIDIR_LSHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsl_r_p_or)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV | fBIDIR_LSHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asr_r_p_xor)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV ^ fBIDIR_ASHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_r_p_xor)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV ^ fBIDIR_ASHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_r_p_xor)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV ^ fBIDIR_LSHIFTR(RssV,shamt,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsl_r_p_xor)(int64_t RxxV, int64_t RssV, int32_t RtV)
{
    { fHIDE(size4s_t) shamt=fSXTN(7,32,RtV); RxxV = fECHO(RxxV ^ fBIDIR_LSHIFTL(RssV,shamt,8_8)); }
    return RxxV;
}

int32_t HELPER(S2_asr_i_r)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = fECHO( fASHIFTR(RsV,uiV,4_4)); }
    return RdV;
}

int32_t HELPER(S2_lsr_i_r)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = fECHO( fLSHIFTR(RsV,uiV,4_4)); }
    return RdV;
}

int32_t HELPER(S2_asl_i_r)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = fECHO( fASHIFTL(RsV,uiV,4_4)); }
    return RdV;
}

int32_t HELPER(S6_rol_i_r)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = fECHO( fROTL(RsV,uiV,4_4)); }
    return RdV;
}

int64_t HELPER(S2_asr_i_p)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { RddV = fECHO( fASHIFTR(RssV,uiV,8_8)); }
    return RddV;
}

int64_t HELPER(S2_lsr_i_p)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { RddV = fECHO( fLSHIFTR(RssV,uiV,8_8)); }
    return RddV;
}

int64_t HELPER(S2_asl_i_p)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { RddV = fECHO( fASHIFTL(RssV,uiV,8_8)); }
    return RddV;
}

int64_t HELPER(S6_rol_i_p)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { RddV = fECHO( fROTL(RssV,uiV,8_8)); }
    return RddV;
}

int32_t HELPER(S2_asr_i_r_acc)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV + fASHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_lsr_i_r_acc)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV + fLSHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_asl_i_r_acc)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV + fASHIFTL(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S6_rol_i_r_acc)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV + fROTL(RsV,uiV,4_4)); }
    return RxV;
}

int64_t HELPER(S2_asr_i_p_acc)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV + fASHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_i_p_acc)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV + fLSHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_i_p_acc)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV + fASHIFTL(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S6_rol_i_p_acc)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV + fROTL(RssV,uiV,8_8)); }
    return RxxV;
}

int32_t HELPER(S2_asr_i_r_nac)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV - fASHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_lsr_i_r_nac)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV - fLSHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_asl_i_r_nac)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV - fASHIFTL(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S6_rol_i_r_nac)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV - fROTL(RsV,uiV,4_4)); }
    return RxV;
}

int64_t HELPER(S2_asr_i_p_nac)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV - fASHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_i_p_nac)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV - fLSHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_i_p_nac)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV - fASHIFTL(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S6_rol_i_p_nac)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV - fROTL(RssV,uiV,8_8)); }
    return RxxV;
}

int32_t HELPER(S2_lsr_i_r_xacc)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV ^ fLSHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_asl_i_r_xacc)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV ^ fASHIFTL(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S6_rol_i_r_xacc)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV ^ fROTL(RsV,uiV,4_4)); }
    return RxV;
}

int64_t HELPER(S2_lsr_i_p_xacc)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV ^ fLSHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_i_p_xacc)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV ^ fASHIFTL(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S6_rol_i_p_xacc)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV ^ fROTL(RssV,uiV,8_8)); }
    return RxxV;
}

int32_t HELPER(S2_asr_i_r_and)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV & fASHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_lsr_i_r_and)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV & fLSHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_asl_i_r_and)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV & fASHIFTL(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S6_rol_i_r_and)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV & fROTL(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_asr_i_r_or)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV | fASHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_lsr_i_r_or)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV | fLSHIFTR(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S2_asl_i_r_or)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV | fASHIFTL(RsV,uiV,4_4)); }
    return RxV;
}

int32_t HELPER(S6_rol_i_r_or)(int32_t RxV, int32_t RsV, int32_t uiV)
{
    { RxV = fECHO(RxV | fROTL(RsV,uiV,4_4)); }
    return RxV;
}

int64_t HELPER(S2_asr_i_p_and)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV & fASHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_i_p_and)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV & fLSHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_i_p_and)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV & fASHIFTL(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S6_rol_i_p_and)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV & fROTL(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asr_i_p_or)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV | fASHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_lsr_i_p_or)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV | fLSHIFTR(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S2_asl_i_p_or)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV | fASHIFTL(RssV,uiV,8_8)); }
    return RxxV;
}

int64_t HELPER(S6_rol_i_p_or)(int64_t RxxV, int64_t RssV, int32_t uiV)
{
    { RxxV = fECHO(RxxV | fROTL(RssV,uiV,8_8)); }
    return RxxV;
}

int32_t HELPER(S2_asl_i_r_sat)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { RdV = fSAT( fASHIFTL(RsV,uiV,4_8)); }
    return RdV;
}

int32_t HELPER(S2_asr_i_r_rnd)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = fASHIFTR(((fASHIFTR(RsV,uiV,4_8))+1),1,8_8); }
    return RdV;
}

int64_t HELPER(S2_asr_i_p_rnd)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(size8u_t tmp;) fHIDE(size8u_t rnd;) tmp = fASHIFTR(RssV,uiV,8_8); rnd = tmp & 1; RddV = fASHIFTR(tmp,1,8_8) + rnd; }
    return RddV;
}

int32_t HELPER(S4_lsli)(int32_t RtV, int32_t siV)
{
    int32_t RdV = 0;
    { fHIDE(size4s_t) shamt = fSXTN(7,32,RtV); RdV = fBIDIR_LSHIFTL(siV,shamt,4_8); }
    return RdV;
}

int32_t HELPER(S2_addasl_rrri)(int32_t RtV, int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = RtV + fASHIFTL(RsV,uiV,4_4); }
    return RdV;
}

int32_t HELPER(S4_andi_asl_ri)(int32_t RxV, int32_t uiV, int32_t UiV)
{
    {RxV=fIMMEXT(uiV)&(RxV<<UiV);}
    return RxV;
}

int32_t HELPER(S4_ori_asl_ri)(int32_t RxV, int32_t uiV, int32_t UiV)
{
    {RxV=fIMMEXT(uiV)|(RxV<<UiV);}
    return RxV;
}

int32_t HELPER(S4_addi_asl_ri)(int32_t RxV, int32_t uiV, int32_t UiV)
{
    {RxV=fIMMEXT(uiV)+(RxV<<UiV);}
    return RxV;
}

int32_t HELPER(S4_subi_asl_ri)(int32_t RxV, int32_t uiV, int32_t UiV)
{
    {RxV=fIMMEXT(uiV)-(RxV<<UiV);}
    return RxV;
}

int32_t HELPER(S4_andi_lsr_ri)(int32_t RxV, int32_t uiV, int32_t UiV)
{
    {RxV=fIMMEXT(uiV)&(((unsigned int)RxV)>>UiV);}
    return RxV;
}

int32_t HELPER(S4_ori_lsr_ri)(int32_t RxV, int32_t uiV, int32_t UiV)
{
    {RxV=fIMMEXT(uiV)|(((unsigned int)RxV)>>UiV);}
    return RxV;
}

int32_t HELPER(S4_addi_lsr_ri)(int32_t RxV, int32_t uiV, int32_t UiV)
{
    {RxV=fIMMEXT(uiV)+(((unsigned int)RxV)>>UiV);}
    return RxV;
}

int32_t HELPER(S4_subi_lsr_ri)(int32_t RxV, int32_t uiV, int32_t UiV)
{
    {RxV=fIMMEXT(uiV)-(((unsigned int)RxV)>>UiV);}
    return RxV;
}

int64_t HELPER(S2_valignib)(int64_t RttV, int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { RddV = (fLSHIFTR(RssV,uiV*8,8_8))|(fASHIFTL(RttV,((8-uiV)*8),8_8)); }
    return RddV;
}

int64_t HELPER(S2_valignrb)(int64_t RttV, int64_t RssV, int32_t PuV)
{
    int64_t RddV = 0;
    { RddV = fLSHIFTR(RssV,(PuV&0x7)*8,8_8)|(fASHIFTL(RttV,(8-(PuV&0x7))*8,8_8));}
    return RddV;
}

int64_t HELPER(S2_vspliceib)(int64_t RssV, int64_t RttV, int32_t uiV)
{
    int64_t RddV = 0;
    { RddV = fASHIFTL(RttV,uiV*8,8_8) | fZXTN(uiV*8,64,RssV); }
    return RddV;
}

int64_t HELPER(S2_vsplicerb)(int64_t RssV, int64_t RttV, int32_t PuV)
{
    int64_t RddV = 0;
    { RddV = fASHIFTL(RttV,(PuV&7)*8,8_8) | fZXTN((PuV&7)*8,64,RssV); }
    return RddV;
}

int64_t HELPER(S2_vsplatrh)(int32_t RsV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, fGETHALF(0,RsV)); } }
    return RddV;
}

int32_t HELPER(S2_vsplatrb)(int32_t RsV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RdV, fGETBYTE(0,RsV)); } }
    return RdV;
}

int64_t HELPER(S6_vsplatrbp)(int32_t RsV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<8;i++) { fSETBYTE(i,RddV, fGETBYTE(0,RsV)); } }
    return RddV;
}

int32_t HELPER(S2_tableidxb)(int32_t RxV, int32_t RsV, int32_t uiV, int32_t SiV)
{
    { fHIDE(int) width=uiV; fHIDE(int) offset=SiV; fHIDE(int) field = fEXTRACTU_BIDIR(RsV,width,offset); fINSERT_BITS(RxV,width,0,field); }
    return RxV;
}

int32_t HELPER(S2_tableidxh)(int32_t RxV, int32_t RsV, int32_t uiV, int32_t SiV)
{
    { fHIDE(int) width=uiV; fHIDE(int) offset=SiV+1; fHIDE(int) field = fEXTRACTU_BIDIR(RsV,width,offset); fINSERT_BITS(RxV,width,1,field); }
    return RxV;
}

int32_t HELPER(S2_tableidxw)(int32_t RxV, int32_t RsV, int32_t uiV, int32_t SiV)
{
    { fHIDE(int) width=uiV; fHIDE(int) offset=SiV+2; fHIDE(int) field = fEXTRACTU_BIDIR(RsV,width,offset); fINSERT_BITS(RxV,width,2,field); }
    return RxV;
}

int32_t HELPER(S2_tableidxd)(int32_t RxV, int32_t RsV, int32_t uiV, int32_t SiV)
{
    { fHIDE(int) width=uiV; fHIDE(int) offset=SiV+3; fHIDE(int) field = fEXTRACTU_BIDIR(RsV,width,offset); fINSERT_BITS(RxV,width,3,field); }
    return RxV;
}

int64_t HELPER(A4_bitspliti)(int32_t RsV, int32_t uiV)
{
    int64_t RddV = 0;
    { fSETWORD(1,RddV,(fCAST4_4u(RsV)>>uiV)); fSETWORD(0,RddV,fZXTN(uiV,32,RsV)); }
    return RddV;
}

int64_t HELPER(A4_bitsplit)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(size4u_t) shamt = fZXTN(5,32,RtV); fSETWORD(1,RddV,(fCAST4_4u(RsV)>>shamt)); fSETWORD(0,RddV,fZXTN(shamt,32,RsV)); }
    return RddV;
}

int32_t HELPER(S4_extract)(int32_t RsV, int32_t uiV, int32_t UiV)
{
    int32_t RdV = 0;
    { fHIDE(int) width=uiV; fHIDE(int) offset=UiV; RdV = fSXTN(width,32,(fCAST4_4u(RsV) >> offset)); }
    return RdV;
}

int32_t HELPER(S2_extractu)(int32_t RsV, int32_t uiV, int32_t UiV)
{
    int32_t RdV = 0;
    { fHIDE(int) width=uiV; fHIDE(int) offset=UiV; RdV = fZXTN(width,32,(fCAST4_4u(RsV) >> offset)); }
    return RdV;
}

int64_t HELPER(S2_insertp)(int64_t RxxV, int64_t RssV, int32_t uiV, int32_t UiV)
{
    { fHIDE(int) width=uiV; fHIDE(int) offset=UiV; RxxV &= ~(((fCONSTLL(1)<<width)-1)<<offset); RxxV |= ((RssV & ((fCONSTLL(1)<<width)-1)) << offset); }
    return RxxV;
}

int64_t HELPER(S4_extractp)(int64_t RssV, int32_t uiV, int32_t UiV)
{
    int64_t RddV = 0;
    { fHIDE(int) width=uiV; fHIDE(int) offset=UiV; RddV = fSXTN(width,64,(fCAST8_8u(RssV) >> offset)); }
    return RddV;
}

int64_t HELPER(S2_extractup)(int64_t RssV, int32_t uiV, int32_t UiV)
{
    int64_t RddV = 0;
    { fHIDE(int) width=uiV; fHIDE(int) offset=UiV; RddV = fZXTN(width,64,(fCAST8_8u(RssV) >> offset)); }
    return RddV;
}

int32_t HELPER(S2_mask)(int32_t uiV, int32_t UiV)
{
    int32_t RdV = 0;
    { RdV = ((1<<uiV)-1) << UiV; }
    return RdV;
}

int32_t HELPER(S4_extract_rp)(int32_t RsV, int64_t RttV)
{
    int32_t RdV = 0;
    { fHIDE(int) width=fZXTN(6,32,(fGETWORD(1,RttV))); fHIDE(int) offset=fSXTN(7,32,(fGETWORD(0,RttV))); RdV = fSXTN(width,64,fBIDIR_LSHIFTR(fCAST4_8u(RsV),offset,4_8)); }
    return RdV;
}

int32_t HELPER(S2_extractu_rp)(int32_t RsV, int64_t RttV)
{
    int32_t RdV = 0;
    { fHIDE(int) width=fZXTN(6,32,(fGETWORD(1,RttV))); fHIDE(int) offset=fSXTN(7,32,(fGETWORD(0,RttV))); RdV = fZXTN(width,64,fBIDIR_LSHIFTR(fCAST4_8u(RsV),offset,4_8)); }
    return RdV;
}

int64_t HELPER(S2_insertp_rp)(int64_t RxxV, int64_t RssV, int64_t RttV)
{
    { fHIDE(int) width=fZXTN(6,32,(fGETWORD(1,RttV))); fHIDE(int) offset=fSXTN(7,32,(fGETWORD(0,RttV))); fHIDE(size8u_t) mask = ((fCONSTLL(1)<<width)-1); if (offset < 0) { RxxV = 0; } else { RxxV &= ~(mask<<offset); RxxV |= ((RssV & mask) << offset); } }
    return RxxV;
}

int64_t HELPER(S4_extractp_rp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int) width=fZXTN(6,32,(fGETWORD(1,RttV))); fHIDE(int) offset=fSXTN(7,32,(fGETWORD(0,RttV))); RddV = fSXTN(width,64,fBIDIR_LSHIFTR(fCAST8_8u(RssV),offset,8_8)); }
    return RddV;
}

int64_t HELPER(S2_extractup_rp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int) width=fZXTN(6,32,(fGETWORD(1,RttV))); fHIDE(int) offset=fSXTN(7,32,(fGETWORD(0,RttV))); RddV = fZXTN(width,64,fBIDIR_LSHIFTR(fCAST8_8u(RssV),offset,8_8)); }
    return RddV;
}

int32_t HELPER(S2_tstbit_i)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    { PdV = f8BITSOF((RsV & (1<<uiV)) != 0); }
    return PdV;
}

int32_t HELPER(S4_ntstbit_i)(int32_t RsV, int32_t uiV)
{
    int32_t PdV = 0;
    { PdV = f8BITSOF((RsV & (1<<uiV)) == 0); }
    return PdV;
}

int32_t HELPER(S2_setbit_i)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = (RsV | (1<<uiV)); }
    return RdV;
}

int32_t HELPER(S2_togglebit_i)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = (RsV ^ (1<<uiV)); }
    return RdV;
}

int32_t HELPER(S2_clrbit_i)(int32_t RsV, int32_t uiV)
{
    int32_t RdV = 0;
    { RdV = (RsV & (~(1<<uiV))); }
    return RdV;
}

int32_t HELPER(S2_tstbit_r)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    { PdV = f8BITSOF((fCAST4_8u(RsV) & fBIDIR_LSHIFTL(1,fSXTN(7,32,RtV),4_8)) != 0); }
    return PdV;
}

int32_t HELPER(S4_ntstbit_r)(int32_t RsV, int32_t RtV)
{
    int32_t PdV = 0;
    { PdV = f8BITSOF((fCAST4_8u(RsV) & fBIDIR_LSHIFTL(1,fSXTN(7,32,RtV),4_8)) == 0); }
    return PdV;
}

int32_t HELPER(S2_setbit_r)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV = (RsV | fBIDIR_LSHIFTL(1,fSXTN(7,32,RtV),4_8)); }
    return RdV;
}

int32_t HELPER(S2_togglebit_r)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV = (RsV ^ fBIDIR_LSHIFTL(1,fSXTN(7,32,RtV),4_8)); }
    return RdV;
}

int32_t HELPER(S2_clrbit_r)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV = (RsV & (~(fBIDIR_LSHIFTL(1,fSXTN(7,32,RtV),4_8)))); }
    return RdV;
}

int64_t HELPER(S2_asr_i_vh)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, (fGETHALF(i,RssV)>>uiV)); } }
    return RddV;
}

int64_t HELPER(S2_lsr_i_vh)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, (fGETUHALF(i,RssV)>>uiV)); } }
    return RddV;
}

int64_t HELPER(S2_asl_i_vh)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, (fGETHALF(i,RssV)<<uiV)); } }
    return RddV;
}

int64_t HELPER(S2_asr_r_vh)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, fBIDIR_ASHIFTR(fGETHALF(i,RssV),fSXTN(7,32,RtV),2_8)); } }
    return RddV;
}

int32_t HELPER(S5_asrhub_rnd_sat)(CPUHexagonState *env, int64_t RssV, int32_t uiV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RdV, fSATUB( ((fGETHALF(i,RssV) >> uiV )+1)>>1 )); } }
    return RdV;
}

int32_t HELPER(S5_asrhub_sat)(CPUHexagonState *env, int64_t RssV, int32_t uiV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RdV, fSATUB( fGETHALF(i,RssV) >> uiV )); } }
    return RdV;
}

int64_t HELPER(S5_vasrhrnd)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, ( ((fGETHALF(i,RssV) >> uiV)+1)>>1 )); } }
    return RddV;
}

int64_t HELPER(S2_asl_r_vh)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, fBIDIR_ASHIFTL(fGETHALF(i,RssV),fSXTN(7,32,RtV),2_8)); } }
    return RddV;
}

int64_t HELPER(S2_lsr_r_vh)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, fBIDIR_LSHIFTR(fGETUHALF(i,RssV),fSXTN(7,32,RtV),2_8)); } }
    return RddV;
}

int64_t HELPER(S2_lsl_r_vh)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV, fBIDIR_LSHIFTL(fGETUHALF(i,RssV),fSXTN(7,32,RtV),2_8)); } }
    return RddV;
}

int64_t HELPER(S2_asr_i_vw)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fGETWORD(i,RssV)>>uiV)); } }
    return RddV;
}

int32_t HELPER(S2_asr_i_svw_trun)(int64_t RssV, int32_t uiV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fGETHALF(0,(fGETWORD(i,RssV)>>uiV))); } }
    return RdV;
}

int64_t HELPER(S2_lsr_i_vw)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fGETUWORD(i,RssV)>>uiV)); } }
    return RddV;
}

int64_t HELPER(S2_asl_i_vw)(int64_t RssV, int32_t uiV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,(fGETWORD(i,RssV)<<uiV)); } }
    return RddV;
}

int64_t HELPER(S2_asr_r_vw)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV, fBIDIR_ASHIFTR(fGETWORD(i,RssV),fSXTN(7,32,RtV),4_8)); } }
    return RddV;
}

int64_t HELPER(S2_asl_r_vw)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV, fBIDIR_ASHIFTL(fGETWORD(i,RssV),fSXTN(7,32,RtV),4_8)); } }
    return RddV;
}

int64_t HELPER(S2_lsr_r_vw)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV, fBIDIR_LSHIFTR(fGETUWORD(i,RssV),fSXTN(7,32,RtV),4_8)); } }
    return RddV;
}

int64_t HELPER(S2_lsl_r_vw)(int64_t RssV, int32_t RtV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV, fBIDIR_LSHIFTL(fGETUWORD(i,RssV),fSXTN(7,32,RtV),4_8)); } }
    return RddV;
}

int32_t HELPER(S2_vrndpackwh)(int64_t RssV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fGETHALF(1,(fGETWORD(i,RssV)+0x08000))); } }
    return RdV;
}

int32_t HELPER(S2_vrndpackwhs)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fGETHALF(1,fSAT(fGETWORD(i,RssV)+0x08000))); } }
    return RdV;
}

int64_t HELPER(S2_vsxtbh)(int32_t RsV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fGETBYTE(i,RsV)); } }
    return RddV;
}

int64_t HELPER(S2_vzxtbh)(int32_t RsV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fGETUBYTE(i,RsV)); } }
    return RddV;
}

int32_t HELPER(S2_vsathub)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RdV,fSATUN(8,fGETHALF(i,RssV))); } }
    return RdV;
}

int32_t HELPER(S2_svsathub)(CPUHexagonState *env, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETBYTE(0,RdV,fSATUN(8,fGETHALF(0,RsV))); fSETBYTE(1,RdV,fSATUN(8,fGETHALF(1,RsV))); fSETBYTE(2,RdV,0); fSETBYTE(3,RdV,0); }
    return RdV;
}

int32_t HELPER(S2_svsathb)(CPUHexagonState *env, int32_t RsV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fSETBYTE(0,RdV,fSATN(8,fGETHALF(0,RsV))); fSETBYTE(1,RdV,fSATN(8,fGETHALF(1,RsV))); fSETBYTE(2,RdV,0); fSETBYTE(3,RdV,0); }
    return RdV;
}

int32_t HELPER(S2_vsathb)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RdV,fSATN(8,fGETHALF(i,RssV))); } }
    return RdV;
}

int32_t HELPER(S2_vtrunohb)(int64_t RssV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RdV,fGETBYTE(i*2+1,RssV)); } }
    return RdV;
}

int64_t HELPER(S2_vtrunewh)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,fGETHALF(0,RttV)); fSETHALF(1,RddV,fGETHALF(2,RttV)); fSETHALF(2,RddV,fGETHALF(0,RssV)); fSETHALF(3,RddV,fGETHALF(2,RssV)); }
    return RddV;
}

int64_t HELPER(S2_vtrunowh)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,fGETHALF(1,RttV)); fSETHALF(1,RddV,fGETHALF(3,RttV)); fSETHALF(2,RddV,fGETHALF(1,RssV)); fSETHALF(3,RddV,fGETHALF(3,RssV)); }
    return RddV;
}

int32_t HELPER(S2_vtrunehb)(int64_t RssV)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RdV,fGETBYTE(i*2,RssV)); } }
    return RdV;
}

int64_t HELPER(S6_vtrunehb_ppp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RddV,fGETBYTE(i*2,RttV)); fSETBYTE(i+4,RddV,fGETBYTE(i*2,RssV)); } }
    return RddV;
}

int64_t HELPER(S6_vtrunohb_ppp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i,RddV,fGETBYTE(i*2+1,RttV)); fSETBYTE(i+4,RddV,fGETBYTE(i*2+1,RssV)); } }
    return RddV;
}

int64_t HELPER(S2_vsxthw)(int32_t RsV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fGETHALF(i,RsV)); } }
    return RddV;
}

int64_t HELPER(S2_vzxthw)(int32_t RsV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fGETUHALF(i,RsV)); } }
    return RddV;
}

int32_t HELPER(S2_vsatwh)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fSATN(16,fGETWORD(i,RssV))); } }
    return RdV;
}

int32_t HELPER(S2_vsatwuh)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int32_t RdV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i,RdV,fSATUN(16,fGETWORD(i,RssV))); } }
    return RdV;
}

int64_t HELPER(S2_packhl)(int32_t RsV, int32_t RtV)
{
    int64_t RddV = 0;
    { fSETHALF(0,RddV,fGETHALF(0,RtV)); fSETHALF(1,RddV,fGETHALF(0,RsV)); fSETHALF(2,RddV,fGETHALF(1,RtV)); fSETHALF(3,RddV,fGETHALF(1,RsV)); }
    return RddV;
}

int64_t HELPER(S2_vsathub_nopack)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATUN(8,fGETHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(S2_vsathb_nopack)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETHALF(i,RddV,fSATN(8,fGETHALF(i,RssV))); } }
    return RddV;
}

int64_t HELPER(S2_vsatwh_nopack)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fSATN(16,fGETWORD(i,RssV))); } }
    return RddV;
}

int64_t HELPER(S2_vsatwuh_nopack)(CPUHexagonState *env, int64_t RssV, uint32_t pkt_need_commit)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETWORD(i,RddV,fSATUN(16,fGETWORD(i,RssV))); } }
    return RddV;
}

int64_t HELPER(S2_shuffob)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i*2 ,RddV,fGETBYTE(i*2+1,RssV)); fSETBYTE(i*2+1,RddV,fGETBYTE(i*2+1,RttV)); } }
    return RddV;
}

int64_t HELPER(S2_shuffeb)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<4;i++) { fSETBYTE(i*2 ,RddV,fGETBYTE(i*2,RttV)); fSETBYTE(i*2+1,RddV,fGETBYTE(i*2,RssV)); } }
    return RddV;
}

int64_t HELPER(S2_shuffoh)(int64_t RttV, int64_t RssV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i*2 ,RddV,fGETHALF(i*2+1,RssV)); fSETHALF(i*2+1,RddV,fGETHALF(i*2+1,RttV)); } }
    return RddV;
}

int64_t HELPER(S2_shuffeh)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { fHIDE(int i;) for (i=0;i<2;i++) { fSETHALF(i*2 ,RddV,fGETHALF(i*2,RttV)); fSETHALF(i*2+1,RddV,fGETHALF(i*2,RssV)); } }
    return RddV;
}

int32_t HELPER(S5_popcountp)(int64_t RssV)
{
    int32_t RdV = 0;
    { RdV = fCOUNTONES_8(RssV); }
    return RdV;
}

int32_t HELPER(S4_parity)(int32_t RsV, int32_t RtV)
{
    int32_t RdV = 0;
    { RdV = 1&fCOUNTONES_4(RsV & RtV); }
    return RdV;
}

int32_t HELPER(S2_parityp)(int64_t RssV, int64_t RttV)
{
    int32_t RdV = 0;
    { RdV = 1&fCOUNTONES_8(RssV & RttV); }
    return RdV;
}

int64_t HELPER(S2_lfsp)(int64_t RssV, int64_t RttV)
{
    int64_t RddV = 0;
    { RddV = (fCAST8u(RssV) >> 1) | (fCAST8u((1&fCOUNTONES_8(RssV & RttV)))<<63) ; }
    return RddV;
}

int32_t HELPER(S2_clbnorm)(int32_t RsV)
{
    int32_t RdV = 0;
    { if (RsV == 0) { RdV = 0; } else { RdV = (fMAX(fCL1_4(RsV),fCL1_4(~RsV)))-1;} }
    return RdV;
}

int32_t HELPER(S4_clbaddi)(int32_t RsV, int32_t siV)
{
    int32_t RdV = 0;
    { RdV = (fMAX(fCL1_4(RsV),fCL1_4(~RsV)))+siV;}
    return RdV;
}

int32_t HELPER(S4_clbpnorm)(int64_t RssV)
{
    int32_t RdV = 0;
    { if (RssV == 0) { RdV = 0; } else { RdV = (fMAX(fCL1_8(RssV),fCL1_8(~RssV)))-1;}}
    return RdV;
}

int32_t HELPER(S4_clbpaddi)(int64_t RssV, int32_t siV)
{
    int32_t RdV = 0;
    { RdV = (fMAX(fCL1_8(RssV),fCL1_8(~RssV)))+siV;}
    return RdV;
}

int32_t HELPER(S2_clb)(int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = fMAX(fCL1_4(RsV),fCL1_4(~RsV));}
    return RdV;
}

int32_t HELPER(S2_cl0)(int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = fCL1_4(~RsV);}
    return RdV;
}

int32_t HELPER(S2_cl1)(int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = fCL1_4(RsV);}
    return RdV;
}

int32_t HELPER(S2_clbp)(int64_t RssV)
{
    int32_t RdV = 0;
    {RdV = fMAX(fCL1_8(RssV),fCL1_8(~RssV));}
    return RdV;
}

int32_t HELPER(S2_cl0p)(int64_t RssV)
{
    int32_t RdV = 0;
    {RdV = fCL1_8(~RssV);}
    return RdV;
}

int32_t HELPER(S2_cl1p)(int64_t RssV)
{
    int32_t RdV = 0;
    {RdV = fCL1_8(RssV);}
    return RdV;
}

int32_t HELPER(S2_brev)(int32_t RsV)
{
    int32_t RdV = 0;
    {RdV = fBREV_4(RsV);}
    return RdV;
}

int64_t HELPER(S2_brevp)(int64_t RssV)
{
    int64_t RddV = 0;
    {RddV = fBREV_8(RssV);}
    return RddV;
}

int64_t HELPER(S2_interleave)(int64_t RssV)
{
    int64_t RddV = 0;
    {RddV = fINTERLEAVE(fGETWORD(1,RssV),fGETWORD(0,RssV));}
    return RddV;
}

int64_t HELPER(S2_deinterleave)(int64_t RssV)
{
    int64_t RddV = 0;
    {RddV = fDEINTERLEAVE(RssV);}
    return RddV;
}

int32_t HELPER(SA1_addi)(int32_t RxV, int32_t siV)
{
    { fIMMEXT(siV); RxV=RxV+siV;}
    return RxV;
}

int32_t HELPER(SA1_tfr)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV=RsV;}
    return RdV;
}

int32_t HELPER(SA1_seti)(int32_t uiV)
{
    int32_t RdV = 0;
    { fIMMEXT(uiV); RdV=uiV;}
    return RdV;
}

int32_t HELPER(SA1_clrt)(int32_t RdV, uint32_t P0)
{
    { if (fLSBOLD(fREAD_P0())) {RdV=0;} else {CANCEL;} }
    return RdV;
}

int32_t HELPER(SA1_clrf)(int32_t RdV, uint32_t P0)
{
    { if (fLSBOLDNOT(fREAD_P0())) {RdV=0;} else {CANCEL;} }
    return RdV;
}

int32_t HELPER(SA1_addsp)(int32_t uiV, uint32_t SP)
{
    int32_t RdV = 0;
    { RdV=fREAD_SP()+uiV; }
    return RdV;
}

int32_t HELPER(SA1_inc)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV=RsV+1;}
    return RdV;
}

int32_t HELPER(SA1_dec)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV=RsV-1;}
    return RdV;
}

int32_t HELPER(SA1_addrx)(int32_t RxV, int32_t RsV)
{
    { RxV=RxV+RsV; }
    return RxV;
}

int32_t HELPER(SA1_zxtb)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV= fZXTN(8,32,RsV);}
    return RdV;
}

int32_t HELPER(SA1_and1)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV= RsV&1;}
    return RdV;
}

int32_t HELPER(SA1_sxtb)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV= fSXTN(8,32,RsV);}
    return RdV;
}

int32_t HELPER(SA1_zxth)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV= fZXTN(16,32,RsV);}
    return RdV;
}

int32_t HELPER(SA1_sxth)(int32_t RsV)
{
    int32_t RdV = 0;
    { RdV= fSXTN(16,32,RsV);}
    return RdV;
}

int64_t HELPER(SA1_combinezr)(int32_t RsV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,RsV); fSETWORD(1,RddV,0); }
    return RddV;
}

int64_t HELPER(SA1_combinerz)(int32_t RsV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,0); fSETWORD(1,RddV,RsV); }
    return RddV;
}

int64_t HELPER(SA1_combine0i)(int32_t uiV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,uiV); fSETWORD(1,RddV,0); }
    return RddV;
}

int64_t HELPER(SA1_combine1i)(int32_t uiV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,uiV); fSETWORD(1,RddV,1); }
    return RddV;
}

int64_t HELPER(SA1_combine2i)(int32_t uiV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,uiV); fSETWORD(1,RddV,2); }
    return RddV;
}

int64_t HELPER(SA1_combine3i)(int32_t uiV)
{
    int64_t RddV = 0;
    { fSETWORD(0,RddV,uiV); fSETWORD(1,RddV,3); }
    return RddV;
}

int32_t HELPER(SL1_loadri_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fLOAD(1,4,u,EA,RdV);}
    return RdV;
}

int32_t HELPER(SL1_loadrub_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fLOAD(1,1,u,EA,RdV);}
    return RdV;
}

int32_t HELPER(SL2_loadrh_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fLOAD(1,2,s,EA,RdV);}
    return RdV;
}

int32_t HELPER(SL2_loadruh_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fLOAD(1,2,u,EA,RdV);}
    return RdV;
}

int32_t HELPER(SL2_loadrb_io)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fLOAD(1,1,s,EA,RdV);}
    return RdV;
}

int32_t HELPER(SL2_loadri_sp)(CPUHexagonState *env, int32_t uiV, uint32_t SP, uint32_t slotval)
{
    uint32_t EA;
    int32_t RdV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RI(fREAD_SP(),uiV); fLOAD(1,4,u,EA,RdV);}
    return RdV;
}

int64_t HELPER(SL2_loadrd_sp)(CPUHexagonState *env, int32_t uiV, uint32_t SP, uint32_t slotval)
{
    uint32_t EA;
    int64_t RddV = 0;
    bool pkt_has_scalar_store_s1 = slotval & 0x1;
    uint32_t slot = slotval >> 1;
    {fEA_RI(fREAD_SP(),uiV); fLOAD(1,8,u,EA,RddV);}
    return RddV;
}

void HELPER(SS1_storew_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fSTORE(1,4,EA,RtV);}
}

void HELPER(SS1_storeb_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fSTORE(1,1,EA,fGETBYTE(0,RtV));}
}

void HELPER(SS2_storeh_io)(CPUHexagonState *env, int32_t RsV, int32_t RtV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fSTORE(1,2,EA,fGETHALF(0,RtV));}
}

void HELPER(SS2_stored_sp)(CPUHexagonState *env, int64_t RttV, int32_t siV, uint32_t SP, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(fREAD_SP(),siV); fSTORE(1,8,EA,RttV);}
}

void HELPER(SS2_storew_sp)(CPUHexagonState *env, int32_t RtV, int32_t uiV, uint32_t SP, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(fREAD_SP(),uiV); fSTORE(1,4,EA,RtV);}
}

void HELPER(SS2_storewi0)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fSTORE(1,4,EA,0);}
}

void HELPER(SS2_storebi0)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fSTORE(1,1,EA,0);}
}

void HELPER(SS2_storewi1)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fSTORE(1,4,EA,1);}
}

void HELPER(SS2_storebi1)(CPUHexagonState *env, int32_t RsV, int32_t uiV, uint32_t slotval)
{
    uint32_t EA;
    uint32_t slot = slotval >> 1;
    {fEA_RI(RsV,uiV); fSTORE(1,1,EA,1);}
}

void HELPER(V6_valignb)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { unsigned shift = RtV & (fVBYTES()-1); fHIDE(int i;) for(i = 0; i < fVBYTES(); i++) { VdV.ub[i] = (i+shift>=fVBYTES()) ? VuV.ub[i+shift-fVBYTES()] : VvV.ub[i+shift]; } }
}

void HELPER(V6_vlalignb)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { unsigned shift = fVBYTES() - (RtV & (fVBYTES()-1)); fHIDE(int i;) for(i = 0; i < fVBYTES(); i++) { VdV.ub[i] = (i+shift>=fVBYTES()) ? VuV.ub[i+shift-fVBYTES()] : VvV.ub[i+shift]; } }
}

void HELPER(V6_valignbi)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t uiV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) for(i = 0; i < fVBYTES(); i++) { VdV.ub[i] = (i+uiV>=fVBYTES()) ? VuV.ub[i+uiV-fVBYTES()] : VvV.ub[i+uiV]; } }
}

void HELPER(V6_vlalignbi)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t uiV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { unsigned shift = fVBYTES() - uiV; fHIDE(int i;) for(i = 0; i < fVBYTES(); i++) { VdV.ub[i] = (i+shift>=fVBYTES()) ? VuV.ub[i+shift-fVBYTES()] : VvV.ub[i+shift]; } }
}

void HELPER(V6_vror)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int k;) for (k=0;k<fVBYTES();k++) { VdV.ub[k] = VuV.ub[(k+RtV)&(fVBYTES()-1)]; } }
}

void HELPER(V6_vunpackub)(void * VddV_void, void * VuV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fVARRAY_ELEMENT_ACCESS(VddV, uh, i) = fZE8_16( VuV.ub[i]) ; } }
}

void HELPER(V6_vunpackb)(void * VddV_void, void * VuV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fVARRAY_ELEMENT_ACCESS(VddV, h, i) = fSE8_16( VuV.b[i] ) ; } }
}

void HELPER(V6_vunpackuh)(void * VddV_void, void * VuV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fVARRAY_ELEMENT_ACCESS(VddV, uw, i) = fZE16_32(VuV.uh[i]) ; } }
}

void HELPER(V6_vunpackh)(void * VddV_void, void * VuV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fVARRAY_ELEMENT_ACCESS(VddV, w, i) = fSE16_32(VuV.h[i] ) ; } }
}

void HELPER(V6_vunpackob)(void * VxxV_void, void * VuV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fVARRAY_ELEMENT_ACCESS(VxxV, uh, i) |= fZE8_16( VuV.ub[i])<<8 ; } }
}

void HELPER(V6_vunpackoh)(void * VxxV_void, void * VuV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fVARRAY_ELEMENT_ACCESS(VxxV, uw, i) |= fZE16_32(VuV.uh[i])<<16 ; } }
}

void HELPER(V6_vpackeb)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.ub[i] = fGETUBYTE(0, VvV.uh[i]); VdV.ub[i+fVELEM(16)] = fGETUBYTE(0, VuV.uh[i]) ; } }
}

void HELPER(V6_vpackeh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uh[i] = fGETUHALF(0, VvV.uw[i]); VdV.uh[i+fVELEM(32)] = fGETUHALF(0, VuV.uw[i]) ; } }
}

void HELPER(V6_vpackob)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.ub[i] = fGETUBYTE(1, VvV.uh[i]); VdV.ub[i+fVELEM(16)] = fGETUBYTE(1, VuV.uh[i]) ; } }
}

void HELPER(V6_vpackoh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uh[i] = fGETUHALF(1, VvV.uw[i]); VdV.uh[i+fVELEM(32)] = fGETUHALF(1, VuV.uw[i]) ; } }
}

void HELPER(V6_vpackhub_sat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.ub[i] = fVSATUB(VvV.h[i]); VdV.ub[i+fVELEM(16)] = fVSATUB(VuV.h[i]) ; } }
}

void HELPER(V6_vpackhb_sat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.b[i] = fVSATB(VvV.h[i]); VdV.b[i+fVELEM(16)] = fVSATB(VuV.h[i]) ; } }
}

void HELPER(V6_vpackwuh_sat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uh[i] = fVSATUH(VvV.w[i]); VdV.uh[i+fVELEM(32)] = fVSATUH(VuV.w[i]) ; } }
}

void HELPER(V6_vpackwh_sat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.h[i] = fVSATH(VvV.w[i]); VdV.h[i+fVELEM(32)] = fVSATH(VuV.w[i]) ; } }
}

void HELPER(V6_vzb)(void * VddV_void, void * VuV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].uh[i] = fZE8_16(fGETUBYTE(0, VuV.uh[i])); VddV.v[1].uh[i] = fZE8_16(fGETUBYTE(1, VuV.uh[i])) ; } }
}

void HELPER(V6_vsb)(void * VddV_void, void * VuV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fSE8_16(fGETBYTE(0, VuV.h[i])); VddV.v[1].h[i] = fSE8_16(fGETBYTE(1, VuV.h[i])) ; } }
}

void HELPER(V6_vzh)(void * VddV_void, void * VuV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].uw[i] = fZE16_32(fGETUHALF(0, VuV.uw[i])); VddV.v[1].uw[i] = fZE16_32(fGETUHALF(1, VuV.uw[i])) ; } }
}

void HELPER(V6_vsh)(void * VddV_void, void * VuV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fSE16_32(fGETHALF(0, VuV.w[i])); VddV.v[1].w[i] = fSE16_32(fGETHALF(1, VuV.w[i])) ; } }
}

void HELPER(V6_vdmpybus)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fMPY8US( fGETUBYTE(0, VuV.uh[i]), fGETBYTE((2*i) % 4, RtV)); VdV.h[i] += fMPY8US( fGETUBYTE(1, VuV.uh[i]), fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vdmpybus_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i] += fMPY8US( fGETUBYTE(0, VuV.uh[i]), fGETBYTE((2*i) % 4, RtV)); VxV.h[i] += fMPY8US( fGETUBYTE(1, VuV.uh[i]), fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vdmpybus_dv)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8US(fGETUBYTE(0, VuuV.v[0].uh[i]),fGETBYTE((2*i) % 4, RtV)); VddV.v[0].h[i] += fMPY8US(fGETUBYTE(1, VuuV.v[0].uh[i]),fGETBYTE((2*i+1)%4, RtV)); VddV.v[1].h[i] = fMPY8US(fGETUBYTE(1, VuuV.v[0].uh[i]),fGETBYTE((2*i) % 4, RtV)); VddV.v[1].h[i] += fMPY8US(fGETUBYTE(0, VuuV.v[1].uh[i]),fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vdmpybus_dv_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].h[i] += fMPY8US(fGETUBYTE(0, VuuV.v[0].uh[i]),fGETBYTE((2*i) % 4, RtV)); VxxV.v[0].h[i] += fMPY8US(fGETUBYTE(1, VuuV.v[0].uh[i]),fGETBYTE((2*i+1)%4, RtV)); VxxV.v[1].h[i] += fMPY8US(fGETUBYTE(1, VuuV.v[0].uh[i]),fGETBYTE((2*i) % 4, RtV)); VxxV.v[1].h[i] += fMPY8US(fGETUBYTE(0, VuuV.v[1].uh[i]),fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vdmpyhb)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMPY16SS(fGETHALF(0, VuV.w[i]),fGETBYTE((2*i+0)%4, RtV)); VdV.w[i] += fMPY16SS(fGETHALF(1, VuV.w[i]),fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vdmpyhb_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] += fMPY16SS(fGETHALF(0, VuV.w[i]),fGETBYTE((2*i+0)%4, RtV)); VxV.w[i] += fMPY16SS(fGETHALF(1, VuV.w[i]),fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vdmpyhb_dv)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fMPY16SS(fGETHALF(0, VuuV.v[0].w[i]),fGETBYTE((2*i+0)%4, RtV)); VddV.v[0].w[i] += fMPY16SS(fGETHALF(1, VuuV.v[0].w[i]),fGETBYTE((2*i+1)%4, RtV)); VddV.v[1].w[i] = fMPY16SS(fGETHALF(1, VuuV.v[0].w[i]),fGETBYTE((2*i+0)%4, RtV)); VddV.v[1].w[i] += fMPY16SS(fGETHALF(0, VuuV.v[1].w[i]),fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vdmpyhb_dv_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] += fMPY16SS(fGETHALF(0, VuuV.v[0].w[i]),fGETBYTE((2*i+0)%4, RtV)); VxxV.v[0].w[i] += fMPY16SS(fGETHALF(1, VuuV.v[0].w[i]),fGETBYTE((2*i+1)%4, RtV)); VxxV.v[1].w[i] += fMPY16SS(fGETHALF(1, VuuV.v[0].w[i]),fGETBYTE((2*i+0)%4, RtV)); VxxV.v[1].w[i] += fMPY16SS(fGETHALF(0, VuuV.v[1].w[i]),fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vdmpyhvsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t accum;) accum = fMPY16SS(fGETHALF(0,VuV.w[i]),fGETHALF(0, VvV.w[i])); accum += fMPY16SS(fGETHALF(1,VuV.w[i]),fGETHALF(1, VvV.w[i])); VdV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vdmpyhvsat_acc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t accum;) accum = fMPY16SS(fGETHALF(0,VuV.w[i]),fGETHALF(0, VvV.w[i])); accum += fMPY16SS(fGETHALF(1,VuV.w[i]),fGETHALF(1, VvV.w[i])); VxV.w[i] = fVSATW(VxV.w[i]+accum) ; } }
}

void HELPER(V6_vdmpyhsat)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t accum;) accum = fMPY16SS(fGETHALF(0, VuV.w[i]),fGETHALF(0, RtV)); accum += fMPY16SS(fGETHALF(1, VuV.w[i]),fGETHALF(1, RtV)); VdV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vdmpyhsat_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t) accum = VxV.w[i]; accum += fMPY16SS(fGETHALF(0, VuV.w[i]),fGETHALF(0, RtV)); accum += fMPY16SS(fGETHALF(1, VuV.w[i]),fGETHALF(1, RtV)); VxV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vdmpyhisat)(void * VdV_void, void * VuuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t accum;) accum = fMPY16SS(fGETHALF(1,VuuV.v[0].w[i]),fGETHALF(0,RtV)); accum += fMPY16SS(fGETHALF(0,VuuV.v[1].w[i]),fGETHALF(1,RtV)); VdV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vdmpyhisat_acc)(void * VxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t) accum = VxV.w[i]; accum += fMPY16SS(fGETHALF(1,VuuV.v[0].w[i]),fGETHALF(0,RtV)); accum += fMPY16SS(fGETHALF(0,VuuV.v[1].w[i]),fGETHALF(1,RtV)); VxV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vdmpyhsusat)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t accum;) accum = fMPY16SU(fGETHALF(0, VuV.w[i]),fGETUHALF(0, RtV)); accum += fMPY16SU(fGETHALF(1, VuV.w[i]),fGETUHALF(1, RtV)); VdV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vdmpyhsusat_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t) accum=VxV.w[i]; accum += fMPY16SU(fGETHALF(0, VuV.w[i]),fGETUHALF(0, RtV)); accum += fMPY16SU(fGETHALF(1, VuV.w[i]),fGETUHALF(1, RtV)); VxV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vdmpyhsuisat)(void * VdV_void, void * VuuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t accum;) accum = fMPY16SU(fGETHALF(1,VuuV.v[0].w[i]),fGETUHALF(0,RtV)); accum += fMPY16SU(fGETHALF(0,VuuV.v[1].w[i]),fGETUHALF(1,RtV)); VdV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vdmpyhsuisat_acc)(void * VxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t) accum=VxV.w[i]; accum += fMPY16SU(fGETHALF(1, VuuV.v[0].w[i]),fGETUHALF(0,RtV)); accum += fMPY16SU(fGETHALF(0, VuuV.v[1].w[i]),fGETUHALF(1,RtV)); VxV.w[i] = fVSATW(accum) ; } }
}

void HELPER(V6_vtmpyb)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8SS(fGETBYTE(0,VuuV.v[0].h[i]), fGETBYTE((2*i )%4, RtV)); VddV.v[0].h[i] += fMPY8SS(fGETBYTE(1,VuuV.v[0].h[i]), fGETBYTE((2*i+1)%4, RtV)); VddV.v[0].h[i] += fGETBYTE(0,VuuV.v[1].h[i]); VddV.v[1].h[i] = fMPY8SS(fGETBYTE(1,VuuV.v[0].h[i]), fGETBYTE((2*i )%4, RtV)); VddV.v[1].h[i] += fMPY8SS(fGETBYTE(0,VuuV.v[1].h[i]), fGETBYTE((2*i+1)%4, RtV)); VddV.v[1].h[i] += fGETBYTE(1,VuuV.v[1].h[i]) ; } }
}

void HELPER(V6_vtmpyb_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].h[i] += fMPY8SS(fGETBYTE(0,VuuV.v[0].h[i]), fGETBYTE((2*i )%4, RtV)); VxxV.v[0].h[i] += fMPY8SS(fGETBYTE(1,VuuV.v[0].h[i]), fGETBYTE((2*i+1)%4, RtV)); VxxV.v[0].h[i] += fGETBYTE(0,VuuV.v[1].h[i]); VxxV.v[1].h[i] += fMPY8SS(fGETBYTE(1,VuuV.v[0].h[i]), fGETBYTE((2*i )%4, RtV)); VxxV.v[1].h[i] += fMPY8SS(fGETBYTE(0,VuuV.v[1].h[i]), fGETBYTE((2*i+1)%4, RtV)); VxxV.v[1].h[i] += fGETBYTE(1,VuuV.v[1].h[i]) ; } }
}

void HELPER(V6_vtmpybus)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8US(fGETUBYTE(0,VuuV.v[0].uh[i]), fGETBYTE((2*i )%4, RtV)); VddV.v[0].h[i] += fMPY8US(fGETUBYTE(1,VuuV.v[0].uh[i]), fGETBYTE((2*i+1)%4, RtV)); VddV.v[0].h[i] += fGETUBYTE(0,VuuV.v[1].uh[i]); VddV.v[1].h[i] = fMPY8US(fGETUBYTE(1,VuuV.v[0].uh[i]), fGETBYTE((2*i )%4, RtV)); VddV.v[1].h[i] += fMPY8US(fGETUBYTE(0,VuuV.v[1].uh[i]), fGETBYTE((2*i+1)%4, RtV)); VddV.v[1].h[i] += fGETUBYTE(1,VuuV.v[1].uh[i]) ; } }
}

void HELPER(V6_vtmpybus_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].h[i] += fMPY8US(fGETUBYTE(0,VuuV.v[0].uh[i]), fGETBYTE((2*i )%4, RtV)); VxxV.v[0].h[i] += fMPY8US(fGETUBYTE(1,VuuV.v[0].uh[i]), fGETBYTE((2*i+1)%4, RtV)); VxxV.v[0].h[i] += fGETUBYTE(0,VuuV.v[1].uh[i]); VxxV.v[1].h[i] += fMPY8US(fGETUBYTE(1,VuuV.v[0].uh[i]), fGETBYTE((2*i )%4, RtV)); VxxV.v[1].h[i] += fMPY8US(fGETUBYTE(0,VuuV.v[1].uh[i]), fGETBYTE((2*i+1)%4, RtV)); VxxV.v[1].h[i] += fGETUBYTE(1,VuuV.v[1].uh[i]) ; } }
}

void HELPER(V6_vtmpyhb)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fMPY16SS(fGETHALF(0,VuuV.v[0].w[i]), fSE8_16(fGETBYTE((2*i+0)%4, RtV))); VddV.v[0].w[i]+= fMPY16SS(fGETHALF(1,VuuV.v[0].w[i]), fSE8_16(fGETBYTE((2*i+1)%4, RtV))); VddV.v[0].w[i]+= fGETHALF(0,VuuV.v[1].w[i]); VddV.v[1].w[i] = fMPY16SS(fGETHALF(1,VuuV.v[0].w[i]), fSE8_16(fGETBYTE((2*i+0)%4, RtV))); VddV.v[1].w[i]+= fMPY16SS(fGETHALF(0,VuuV.v[1].w[i]), fSE8_16(fGETBYTE((2*i+1)%4, RtV))); VddV.v[1].w[i]+= fGETHALF(1,VuuV.v[1].w[i]) ; } }
}

void HELPER(V6_vtmpyhb_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i]+= fMPY16SS(fGETHALF(0,VuuV.v[0].w[i]), fSE8_16(fGETBYTE((2*i+0)%4, RtV))); VxxV.v[0].w[i]+= fMPY16SS(fGETHALF(1,VuuV.v[0].w[i]), fSE8_16(fGETBYTE((2*i+1)%4, RtV))); VxxV.v[0].w[i]+= fGETHALF(0,VuuV.v[1].w[i]); VxxV.v[1].w[i]+= fMPY16SS(fGETHALF(1,VuuV.v[0].w[i]), fSE8_16(fGETBYTE((2*i+0)%4, RtV))); VxxV.v[1].w[i]+= fMPY16SS(fGETHALF(0,VuuV.v[1].w[i]), fSE8_16(fGETBYTE((2*i+1)%4, RtV))); VxxV.v[1].w[i]+= fGETHALF(1,VuuV.v[1].w[i]) ; } }
}

void HELPER(V6_vrmpyub)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = fMPY8UU(fGETUBYTE(0,VuV.uw[i]), fGETUBYTE(0,RtV)); VdV.uw[i] += fMPY8UU(fGETUBYTE(1,VuV.uw[i]), fGETUBYTE(1,RtV)); VdV.uw[i] += fMPY8UU(fGETUBYTE(2,VuV.uw[i]), fGETUBYTE(2,RtV)); VdV.uw[i] += fMPY8UU(fGETUBYTE(3,VuV.uw[i]), fGETUBYTE(3,RtV)) ; } }
}

void HELPER(V6_vrmpyub_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.uw[i] += fMPY8UU(fGETUBYTE(0,VuV.uw[i]), fGETUBYTE(0,RtV)); VxV.uw[i] += fMPY8UU(fGETUBYTE(1,VuV.uw[i]), fGETUBYTE(1,RtV)); VxV.uw[i] += fMPY8UU(fGETUBYTE(2,VuV.uw[i]), fGETUBYTE(2,RtV)); VxV.uw[i] += fMPY8UU(fGETUBYTE(3,VuV.uw[i]), fGETUBYTE(3,RtV)) ; } }
}

void HELPER(V6_vrmpyubv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = fMPY8UU(fGETUBYTE(0,VuV.uw[i]), fGETUBYTE(0,VvV.uw[i])); VdV.uw[i] += fMPY8UU(fGETUBYTE(1,VuV.uw[i]), fGETUBYTE(1,VvV.uw[i])); VdV.uw[i] += fMPY8UU(fGETUBYTE(2,VuV.uw[i]), fGETUBYTE(2,VvV.uw[i])); VdV.uw[i] += fMPY8UU(fGETUBYTE(3,VuV.uw[i]), fGETUBYTE(3,VvV.uw[i])) ; } }
}

void HELPER(V6_vrmpyubv_acc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.uw[i] += fMPY8UU(fGETUBYTE(0,VuV.uw[i]), fGETUBYTE(0,VvV.uw[i])); VxV.uw[i] += fMPY8UU(fGETUBYTE(1,VuV.uw[i]), fGETUBYTE(1,VvV.uw[i])); VxV.uw[i] += fMPY8UU(fGETUBYTE(2,VuV.uw[i]), fGETUBYTE(2,VvV.uw[i])); VxV.uw[i] += fMPY8UU(fGETUBYTE(3,VuV.uw[i]), fGETUBYTE(3,VvV.uw[i])) ; } }
}

void HELPER(V6_vrmpybv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMPY8SS(fGETBYTE(0, VuV.w[i]), fGETBYTE(0, VvV.w[i])); VdV.w[i] += fMPY8SS(fGETBYTE(1, VuV.w[i]), fGETBYTE(1, VvV.w[i])); VdV.w[i] += fMPY8SS(fGETBYTE(2, VuV.w[i]), fGETBYTE(2, VvV.w[i])); VdV.w[i] += fMPY8SS(fGETBYTE(3, VuV.w[i]), fGETBYTE(3, VvV.w[i])) ; } }
}

void HELPER(V6_vrmpybv_acc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] += fMPY8SS(fGETBYTE(0, VuV.w[i]), fGETBYTE(0, VvV.w[i])); VxV.w[i] += fMPY8SS(fGETBYTE(1, VuV.w[i]), fGETBYTE(1, VvV.w[i])); VxV.w[i] += fMPY8SS(fGETBYTE(2, VuV.w[i]), fGETBYTE(2, VvV.w[i])); VxV.w[i] += fMPY8SS(fGETBYTE(3, VuV.w[i]), fGETBYTE(3, VvV.w[i])) ; } }
}

void HELPER(V6_vrmpyubi)(void * VddV_void, void * VuuV_void, int32_t RtV, int32_t uiV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].uw[i] = fMPY8UU(fGETUBYTE(0, VuuV.v[uiV ? 1:0].uw[i]),fGETUBYTE((0-uiV) & 0x3,RtV)); VddV.v[0].uw[i] += fMPY8UU(fGETUBYTE(1, VuuV.v[0 ].uw[i]),fGETUBYTE((1-uiV) & 0x3,RtV)); VddV.v[0].uw[i] += fMPY8UU(fGETUBYTE(2, VuuV.v[0 ].uw[i]),fGETUBYTE((2-uiV) & 0x3,RtV)); VddV.v[0].uw[i] += fMPY8UU(fGETUBYTE(3, VuuV.v[0 ].uw[i]),fGETUBYTE((3-uiV) & 0x3,RtV)); VddV.v[1].uw[i] = fMPY8UU(fGETUBYTE(0, VuuV.v[1 ].uw[i]),fGETUBYTE((2-uiV) & 0x3,RtV)); VddV.v[1].uw[i] += fMPY8UU(fGETUBYTE(1, VuuV.v[1 ].uw[i]),fGETUBYTE((3-uiV) & 0x3,RtV)); VddV.v[1].uw[i] += fMPY8UU(fGETUBYTE(2, VuuV.v[uiV ? 1:0].uw[i]),fGETUBYTE((0-uiV) & 0x3,RtV)); VddV.v[1].uw[i] += fMPY8UU(fGETUBYTE(3, VuuV.v[0 ].uw[i]),fGETUBYTE((1-uiV) & 0x3,RtV)) ; } }
}

void HELPER(V6_vrmpyubi_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV, int32_t uiV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].uw[i] += fMPY8UU(fGETUBYTE(0, VuuV.v[uiV ? 1:0].uw[i]),fGETUBYTE((0-uiV) & 0x3,RtV)); VxxV.v[0].uw[i] += fMPY8UU(fGETUBYTE(1, VuuV.v[0 ].uw[i]),fGETUBYTE((1-uiV) & 0x3,RtV)); VxxV.v[0].uw[i] += fMPY8UU(fGETUBYTE(2, VuuV.v[0 ].uw[i]),fGETUBYTE((2-uiV) & 0x3,RtV)); VxxV.v[0].uw[i] += fMPY8UU(fGETUBYTE(3, VuuV.v[0 ].uw[i]),fGETUBYTE((3-uiV) & 0x3,RtV)); VxxV.v[1].uw[i] += fMPY8UU(fGETUBYTE(0, VuuV.v[1 ].uw[i]),fGETUBYTE((2-uiV) & 0x3,RtV)); VxxV.v[1].uw[i] += fMPY8UU(fGETUBYTE(1, VuuV.v[1 ].uw[i]),fGETUBYTE((3-uiV) & 0x3,RtV)); VxxV.v[1].uw[i] += fMPY8UU(fGETUBYTE(2, VuuV.v[uiV ? 1:0].uw[i]),fGETUBYTE((0-uiV) & 0x3,RtV)); VxxV.v[1].uw[i] += fMPY8UU(fGETUBYTE(3, VuuV.v[0 ].uw[i]),fGETUBYTE((1-uiV) & 0x3,RtV)) ; } }
}

void HELPER(V6_vrmpybus)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMPY8US(fGETUBYTE(0,VuV.uw[i]), fGETBYTE(0,RtV)); VdV.w[i] += fMPY8US(fGETUBYTE(1,VuV.uw[i]), fGETBYTE(1,RtV)); VdV.w[i] += fMPY8US(fGETUBYTE(2,VuV.uw[i]), fGETBYTE(2,RtV)); VdV.w[i] += fMPY8US(fGETUBYTE(3,VuV.uw[i]), fGETBYTE(3,RtV)) ; } }
}

void HELPER(V6_vrmpybus_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] += fMPY8US(fGETUBYTE(0,VuV.uw[i]), fGETBYTE(0,RtV)); VxV.w[i] += fMPY8US(fGETUBYTE(1,VuV.uw[i]), fGETBYTE(1,RtV)); VxV.w[i] += fMPY8US(fGETUBYTE(2,VuV.uw[i]), fGETBYTE(2,RtV)); VxV.w[i] += fMPY8US(fGETUBYTE(3,VuV.uw[i]), fGETBYTE(3,RtV)) ; } }
}

void HELPER(V6_vrmpybusi)(void * VddV_void, void * VuuV_void, int32_t RtV, int32_t uiV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fMPY8US(fGETUBYTE(0, VuuV.v[uiV ? 1:0].uw[i]),fGETBYTE((0-uiV) & 0x3,RtV)); VddV.v[0].w[i] += fMPY8US(fGETUBYTE(1, VuuV.v[0 ].uw[i]),fGETBYTE((1-uiV) & 0x3,RtV)); VddV.v[0].w[i] += fMPY8US(fGETUBYTE(2, VuuV.v[0 ].uw[i]),fGETBYTE((2-uiV) & 0x3,RtV)); VddV.v[0].w[i] += fMPY8US(fGETUBYTE(3, VuuV.v[0 ].uw[i]),fGETBYTE((3-uiV) & 0x3,RtV)); VddV.v[1].w[i] = fMPY8US(fGETUBYTE(0, VuuV.v[1 ].uw[i]),fGETBYTE((2-uiV) & 0x3,RtV)); VddV.v[1].w[i] += fMPY8US(fGETUBYTE(1, VuuV.v[1 ].uw[i]),fGETBYTE((3-uiV) & 0x3,RtV)); VddV.v[1].w[i] += fMPY8US(fGETUBYTE(2, VuuV.v[uiV ? 1:0].uw[i]),fGETBYTE((0-uiV) & 0x3,RtV)); VddV.v[1].w[i] += fMPY8US(fGETUBYTE(3, VuuV.v[0 ].uw[i]),fGETBYTE((1-uiV) & 0x3,RtV)) ; } }
}

void HELPER(V6_vrmpybusi_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV, int32_t uiV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] += fMPY8US(fGETUBYTE(0, VuuV.v[uiV ? 1:0].uw[i]),fGETBYTE((0-uiV) & 0x3,RtV)); VxxV.v[0].w[i] += fMPY8US(fGETUBYTE(1, VuuV.v[0 ].uw[i]),fGETBYTE((1-uiV) & 0x3,RtV)); VxxV.v[0].w[i] += fMPY8US(fGETUBYTE(2, VuuV.v[0 ].uw[i]),fGETBYTE((2-uiV) & 0x3,RtV)); VxxV.v[0].w[i] += fMPY8US(fGETUBYTE(3, VuuV.v[0 ].uw[i]),fGETBYTE((3-uiV) & 0x3,RtV)); VxxV.v[1].w[i] += fMPY8US(fGETUBYTE(0, VuuV.v[1 ].uw[i]),fGETBYTE((2-uiV) & 0x3,RtV)); VxxV.v[1].w[i] += fMPY8US(fGETUBYTE(1, VuuV.v[1 ].uw[i]),fGETBYTE((3-uiV) & 0x3,RtV)); VxxV.v[1].w[i] += fMPY8US(fGETUBYTE(2, VuuV.v[uiV ? 1:0].uw[i]),fGETBYTE((0-uiV) & 0x3,RtV)); VxxV.v[1].w[i] += fMPY8US(fGETUBYTE(3, VuuV.v[0 ].uw[i]),fGETBYTE((1-uiV) & 0x3,RtV)) ; } }
}

void HELPER(V6_vrmpybusv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMPY8US(fGETUBYTE(0,VuV.uw[i]), fGETBYTE(0,VvV.w[i])); VdV.w[i] += fMPY8US(fGETUBYTE(1,VuV.uw[i]), fGETBYTE(1,VvV.w[i])); VdV.w[i] += fMPY8US(fGETUBYTE(2,VuV.uw[i]), fGETBYTE(2,VvV.w[i])); VdV.w[i] += fMPY8US(fGETUBYTE(3,VuV.uw[i]), fGETBYTE(3,VvV.w[i])) ; } }
}

void HELPER(V6_vrmpybusv_acc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] += fMPY8US(fGETUBYTE(0,VuV.uw[i]), fGETBYTE(0,VvV.w[i])); VxV.w[i] += fMPY8US(fGETUBYTE(1,VuV.uw[i]), fGETBYTE(1,VvV.w[i])); VxV.w[i] += fMPY8US(fGETUBYTE(2,VuV.uw[i]), fGETBYTE(2,VvV.w[i])); VxV.w[i] += fMPY8US(fGETUBYTE(3,VuV.uw[i]), fGETBYTE(3,VvV.w[i])) ; } }
}

void HELPER(V6_vdsaduh)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].uw[i] = fABS(fGETUHALF(0, VuuV.v[0].uw[i]) - fGETUHALF(0,RtV)); VddV.v[0].uw[i] += fABS(fGETUHALF(1, VuuV.v[0].uw[i]) - fGETUHALF(1,RtV)); VddV.v[1].uw[i] = fABS(fGETUHALF(1, VuuV.v[0].uw[i]) - fGETUHALF(0,RtV)); VddV.v[1].uw[i] += fABS(fGETUHALF(0, VuuV.v[1].uw[i]) - fGETUHALF(1,RtV)) ; } }
}

void HELPER(V6_vdsaduh_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].uw[i] += fABS(fGETUHALF(0, VuuV.v[0].uw[i]) - fGETUHALF(0,RtV)); VxxV.v[0].uw[i] += fABS(fGETUHALF(1, VuuV.v[0].uw[i]) - fGETUHALF(1,RtV)); VxxV.v[1].uw[i] += fABS(fGETUHALF(1, VuuV.v[0].uw[i]) - fGETUHALF(0,RtV)); VxxV.v[1].uw[i] += fABS(fGETUHALF(0, VuuV.v[1].uw[i]) - fGETUHALF(1,RtV)) ; } }
}

void HELPER(V6_vrsadubi)(void * VddV_void, void * VuuV_void, int32_t RtV, int32_t uiV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].uw[i] = fABS(fZE8_16(fGETUBYTE(0, VuuV.v[uiV?1:0].uw[i])) - fZE8_16(fGETUBYTE((0-uiV)&3,RtV))); VddV.v[0].uw[i] += fABS(fZE8_16(fGETUBYTE(1, VuuV.v[0 ].uw[i])) - fZE8_16(fGETUBYTE((1-uiV)&3,RtV))); VddV.v[0].uw[i] += fABS(fZE8_16(fGETUBYTE(2, VuuV.v[0 ].uw[i])) - fZE8_16(fGETUBYTE((2-uiV)&3,RtV))); VddV.v[0].uw[i] += fABS(fZE8_16(fGETUBYTE(3, VuuV.v[0 ].uw[i])) - fZE8_16(fGETUBYTE((3-uiV)&3,RtV))); VddV.v[1].uw[i] = fABS(fZE8_16(fGETUBYTE(0, VuuV.v[1 ].uw[i])) - fZE8_16(fGETUBYTE((2-uiV)&3,RtV))); VddV.v[1].uw[i] += fABS(fZE8_16(fGETUBYTE(1, VuuV.v[1 ].uw[i])) - fZE8_16(fGETUBYTE((3-uiV)&3,RtV))); VddV.v[1].uw[i] += fABS(fZE8_16(fGETUBYTE(2, VuuV.v[uiV?1:0].uw[i])) - fZE8_16(fGETUBYTE((0-uiV)&3,RtV))); VddV.v[1].uw[i] += fABS(fZE8_16(fGETUBYTE(3, VuuV.v[0 ].uw[i])) - fZE8_16(fGETUBYTE((1-uiV)&3,RtV))) ; } }
}

void HELPER(V6_vrsadubi_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV, int32_t uiV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].uw[i] += fABS(fZE8_16(fGETUBYTE(0, VuuV.v[uiV?1:0].uw[i])) - fZE8_16(fGETUBYTE((0-uiV)&3,RtV))); VxxV.v[0].uw[i] += fABS(fZE8_16(fGETUBYTE(1, VuuV.v[0 ].uw[i])) - fZE8_16(fGETUBYTE((1-uiV)&3,RtV))); VxxV.v[0].uw[i] += fABS(fZE8_16(fGETUBYTE(2, VuuV.v[0 ].uw[i])) - fZE8_16(fGETUBYTE((2-uiV)&3,RtV))); VxxV.v[0].uw[i] += fABS(fZE8_16(fGETUBYTE(3, VuuV.v[0 ].uw[i])) - fZE8_16(fGETUBYTE((3-uiV)&3,RtV))); VxxV.v[1].uw[i] += fABS(fZE8_16(fGETUBYTE(0, VuuV.v[1 ].uw[i])) - fZE8_16(fGETUBYTE((2-uiV)&3,RtV))); VxxV.v[1].uw[i] += fABS(fZE8_16(fGETUBYTE(1, VuuV.v[1 ].uw[i])) - fZE8_16(fGETUBYTE((3-uiV)&3,RtV))); VxxV.v[1].uw[i] += fABS(fZE8_16(fGETUBYTE(2, VuuV.v[uiV?1:0].uw[i])) - fZE8_16(fGETUBYTE((0-uiV)&3,RtV))); VxxV.v[1].uw[i] += fABS(fZE8_16(fGETUBYTE(3, VuuV.v[0 ].uw[i])) - fZE8_16(fGETUBYTE((1-uiV)&3,RtV))) ; } }
}

void HELPER(V6_vasrwv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fBIDIR_ASHIFTR(VuV.w[i], fSXTN((5+1),32,VvV.w[i]),4_4) ; } }
}

void HELPER(V6_vaslwv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fBIDIR_ASHIFTL(VuV.w[i], fSXTN((5+1),32,VvV.w[i]),4_4) ; } }
}

void HELPER(V6_vlsrwv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = fBIDIR_LSHIFTR(VuV.uw[i], fSXTN((5+1),32,VvV.w[i]),4_4) ; } }
}

void HELPER(V6_vasrhv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fBIDIR_ASHIFTR(VuV.h[i], fSXTN((4+1),16,VvV.h[i]),2_2) ; } }
}

void HELPER(V6_vaslhv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fBIDIR_ASHIFTL(VuV.h[i], fSXTN((4+1),16,VvV.h[i]),2_2) ; } }
}

void HELPER(V6_vlsrhv)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i] = fBIDIR_LSHIFTR(VuV.uh[i], fSXTN((4+1),16,VvV.h[i]),2_2) ; } }
}

void HELPER(V6_vrotr)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = ((VuV.uw[i] >> (VvV.uw[i] & 0x1f)) | (VuV.uw[i] << (32 - (VvV.uw[i] & 0x1f)))) ; } }
}

void HELPER(V6_vasr_into)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int64_t ) shift = (fSE32_64(VuV.w[i]) << 32); fHIDE(int64_t ) mask = (((fSE32_64(VxxV.v[0].w[i])) << 32) | fZE32_64(VxxV.v[0].w[i])); fHIDE(int64_t) lomask = (((fSE32_64(1)) << 32) - 1); fHIDE(int ) count = -(0x40 & VvV.w[i]) + (VvV.w[i] & 0x3f); fHIDE(int64_t ) result = (count == -0x40) ? 0 : (((count < 0) ? ((shift << -(count)) | (mask & (lomask << -(count)))) : ((shift >> count) | (mask & (lomask >> count))))); VxxV.v[1].w[i] = ((result >> 32) & 0xffffffff); VxxV.v[0].w[i] = (result & 0xffffffff) ; } }
}

void HELPER(V6_vasrwh)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = RtV & 0xF; fSETHALF(0,VdV.w[i],fECHO(fVNOROUND(VvV.w[i],shamt) >> shamt)); fSETHALF(1,VdV.w[i],fECHO(fVNOROUND(VuV.w[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrwhsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = RtV & 0xF; fSETHALF(0,VdV.w[i],fVSATH(fVNOROUND(VvV.w[i],shamt) >> shamt)); fSETHALF(1,VdV.w[i],fVSATH(fVNOROUND(VuV.w[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrwhrndsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = RtV & 0xF; fSETHALF(0,VdV.w[i],fVSATH(fVROUND(VvV.w[i],shamt) >> shamt)); fSETHALF(1,VdV.w[i],fVSATH(fVROUND(VuV.w[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrwuhrndsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = RtV & 0xF; fSETHALF(0,VdV.w[i],fVSATUH(fVROUND(VvV.w[i],shamt) >> shamt)); fSETHALF(1,VdV.w[i],fVSATUH(fVROUND(VuV.w[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrwuhsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = RtV & 0xF; fSETHALF(0,VdV.w[i],fVSATUH(fVNOROUND(VvV.w[i],shamt) >> shamt)); fSETHALF(1,VdV.w[i],fVSATUH(fVNOROUND(VuV.w[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasruwuhrndsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = RtV & 0xF; fSETHALF(0,VdV.uw[i],fVSATUH(fVROUND(VvV.uw[i],shamt) >> shamt)); fSETHALF(1,VdV.uw[i],fVSATUH(fVROUND(VuV.uw[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasruwuhsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = RtV & 0xF; fSETHALF(0,VdV.uw[i],fVSATUH(fVNOROUND(VvV.uw[i],shamt) >> shamt)); fSETHALF(1,VdV.uw[i],fVSATUH(fVNOROUND(VuV.uw[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrhubsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(int )shamt = RtV & 0x7; fSETBYTE(0,VdV.h[i],fVSATUB(fVNOROUND(VvV.h[i],shamt) >> shamt)); fSETBYTE(1,VdV.h[i],fVSATUB(fVNOROUND(VuV.h[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrhubrndsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(int )shamt = RtV & 0x7; fSETBYTE(0,VdV.h[i],fVSATUB(fVROUND(VvV.h[i],shamt) >> shamt)); fSETBYTE(1,VdV.h[i],fVSATUB(fVROUND(VuV.h[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrhbsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(int )shamt = RtV & 0x7; fSETBYTE(0,VdV.h[i],fVSATB(fVNOROUND(VvV.h[i],shamt) >> shamt)); fSETBYTE(1,VdV.h[i],fVSATB(fVNOROUND(VuV.h[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrhbrndsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(int )shamt = RtV & 0x7; fSETBYTE(0,VdV.h[i],fVSATB(fVROUND(VvV.h[i],shamt) >> shamt)); fSETBYTE(1,VdV.h[i],fVSATB(fVROUND(VuV.h[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrvwuhsat)(void * VdV_void, void * VuuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = VvV.uh[2*i+0] & 0xF; fSETHALF(0,VdV.w[i],fVSATUH(fVNOROUND(VuuV.v[0].w[i],shamt) >> shamt)); shamt = VvV.uh[2*i+1] & 0xF; fSETHALF(1,VdV.w[i],fVSATUH(fVNOROUND(VuuV.v[1].w[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrvwuhrndsat)(void * VdV_void, void * VuuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(int )shamt = VvV.uh[2*i+0] & 0xF; fSETHALF(0,VdV.w[i],fVSATUH(fVROUND(VuuV.v[0].w[i],shamt) >> shamt)); shamt = VvV.uh[2*i+1] & 0xF; fSETHALF(1,VdV.w[i],fVSATUH(fVROUND(VuuV.v[1].w[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrvuhubsat)(void * VdV_void, void * VuuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(int )shamt = VvV.ub[2*i+0] & 0x7; fSETBYTE(0,VdV.uh[i],fVSATUB(fVNOROUND(VuuV.v[0].uh[i],shamt) >> shamt)); shamt = VvV.ub[2*i+1] & 0x7; fSETBYTE(1,VdV.uh[i],fVSATUB(fVNOROUND(VuuV.v[1].uh[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasrvuhubrndsat)(void * VdV_void, void * VuuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(int )shamt = VvV.ub[2*i+0] & 0x7; fSETBYTE(0,VdV.uh[i],fVSATUB(fVROUND(VuuV.v[0].uh[i],shamt) >> shamt)); shamt = VvV.ub[2*i+1] & 0x7; fSETBYTE(1,VdV.uh[i],fVSATUB(fVROUND(VuuV.v[1].uh[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasruhubsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(int )shamt = RtV & 0x7; fSETBYTE(0,VdV.uh[i],fVSATUB(fVNOROUND(VvV.uh[i],shamt) >> shamt)); fSETBYTE(1,VdV.uh[i],fVSATUB(fVNOROUND(VuV.uh[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vasruhubrndsat)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(int )shamt = RtV & 0x7; fSETBYTE(0,VdV.uh[i],fVSATUB(fVROUND(VvV.uh[i],shamt) >> shamt)); fSETBYTE(1,VdV.uh[i],fVSATUB(fVROUND(VuV.uh[i],shamt) >> shamt)) ; } }
}

void HELPER(V6_vroundwh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VdV.uw[i], fVSATH((VvV.w[i] + fCONSTLL(0x8000)) >> 16)); fSETHALF(1, VdV.uw[i], fVSATH((VuV.w[i] + fCONSTLL(0x8000)) >> 16)) ; } }
}

void HELPER(V6_vroundwuh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VdV.uw[i], fVSATUH((VvV.w[i] + fCONSTLL(0x8000)) >> 16)); fSETHALF(1, VdV.uw[i], fVSATUH((VuV.w[i] + fCONSTLL(0x8000)) >> 16)) ; } }
}

void HELPER(V6_vrounduwuh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VdV.uw[i], fVSATUH((VvV.uw[i] + fCONSTLL(0x8000)) >> 16)); fSETHALF(1, VdV.uw[i], fVSATUH((VuV.uw[i] + fCONSTLL(0x8000)) >> 16)) ; } }
}

void HELPER(V6_vroundhb)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fSETBYTE(0, VdV.uh[i], fVSATB((VvV.h[i] + 0x80) >> 8)); fSETBYTE(1, VdV.uh[i], fVSATB((VuV.h[i] + 0x80) >> 8)) ; } }
}

void HELPER(V6_vroundhub)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fSETBYTE(0, VdV.uh[i], fVSATUB((VvV.h[i] + 0x80) >> 8)); fSETBYTE(1, VdV.uh[i], fVSATUB((VuV.h[i] + 0x80) >> 8)) ; } }
}

void HELPER(V6_vrounduhub)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fSETBYTE(0, VdV.uh[i], fVSATUB((VvV.uh[i] + 0x80) >> 8)); fSETBYTE(1, VdV.uh[i], fVSATUB((VuV.uh[i] + 0x80) >> 8)) ; } }
}

void HELPER(V6_vaddubsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = fVUADDSAT(8, VuV.ub[i], VvV.ub[i]) ; } }
}

void HELPER(V6_vaddubsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VddV.v[0].ub[i] = fVUADDSAT(8, VuuV.v[0].ub[i],VvvV.v[0].ub[i]); VddV.v[1].ub[i] = fVUADDSAT(8, VuuV.v[1].ub[i],VvvV.v[1].ub[i]) ; } }
}

void HELPER(V6_vsububsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = fVUSUBSAT(8, VuV.ub[i], VvV.ub[i]) ; } }
}

void HELPER(V6_vsububsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VddV.v[0].ub[i] = fVUSUBSAT(8, VuuV.v[0].ub[i],VvvV.v[0].ub[i]); VddV.v[1].ub[i] = fVUSUBSAT(8, VuuV.v[1].ub[i],VvvV.v[1].ub[i]) ; } }
}

void HELPER(V6_vadduhsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i] = fVUADDSAT(16, VuV.uh[i], VvV.uh[i]) ; } }
}

void HELPER(V6_vadduhsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].uh[i] = fVUADDSAT(16, VuuV.v[0].uh[i],VvvV.v[0].uh[i]); VddV.v[1].uh[i] = fVUADDSAT(16, VuuV.v[1].uh[i],VvvV.v[1].uh[i]) ; } }
}

void HELPER(V6_vsubuhsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i] = fVUSUBSAT(16, VuV.uh[i], VvV.uh[i]) ; } }
}

void HELPER(V6_vsubuhsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].uh[i] = fVUSUBSAT(16, VuuV.v[0].uh[i],VvvV.v[0].uh[i]); VddV.v[1].uh[i] = fVUSUBSAT(16, VuuV.v[1].uh[i],VvvV.v[1].uh[i]) ; } }
}

void HELPER(V6_vadduwsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = fVUADDSAT(32, VuV.uw[i], VvV.uw[i]) ; } }
}

void HELPER(V6_vadduwsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].uw[i] = fVUADDSAT(32, VuuV.v[0].uw[i],VvvV.v[0].uw[i]); VddV.v[1].uw[i] = fVUADDSAT(32, VuuV.v[1].uw[i],VvvV.v[1].uw[i]) ; } }
}

void HELPER(V6_vsubuwsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = fVUSUBSAT(32, VuV.uw[i], VvV.uw[i]) ; } }
}

void HELPER(V6_vsubuwsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].uw[i] = fVUSUBSAT(32, VuuV.v[0].uw[i],VvvV.v[0].uw[i]); VddV.v[1].uw[i] = fVUSUBSAT(32, VuuV.v[1].uw[i],VvvV.v[1].uw[i]) ; } }
}

void HELPER(V6_vaddbsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = fVSADDSAT(8, VuV.b[i], VvV.b[i]) ; } }
}

void HELPER(V6_vaddbsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VddV.v[0].b[i] = fVSADDSAT(8, VuuV.v[0].b[i], VvvV.v[0].b[i]); VddV.v[1].b[i] = fVSADDSAT(8, VuuV.v[1].b[i], VvvV.v[1].b[i]) ; } }
}

void HELPER(V6_vsubbsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = fVSSUBSAT(8, VuV.b[i], VvV.b[i]) ; } }
}

void HELPER(V6_vsubbsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VddV.v[0].b[i] = fVSSUBSAT(8, VuuV.v[0].b[i], VvvV.v[0].b[i]); VddV.v[1].b[i] = fVSSUBSAT(8, VuuV.v[1].b[i], VvvV.v[1].b[i]) ; } }
}

void HELPER(V6_vaddhsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fVSADDSAT(16, VuV.h[i], VvV.h[i]) ; } }
}

void HELPER(V6_vaddhsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fVSADDSAT(16, VuuV.v[0].h[i], VvvV.v[0].h[i]); VddV.v[1].h[i] = fVSADDSAT(16, VuuV.v[1].h[i], VvvV.v[1].h[i]) ; } }
}

void HELPER(V6_vsubhsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fVSSUBSAT(16, VuV.h[i], VvV.h[i]) ; } }
}

void HELPER(V6_vsubhsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fVSSUBSAT(16, VuuV.v[0].h[i], VvvV.v[0].h[i]); VddV.v[1].h[i] = fVSSUBSAT(16, VuuV.v[1].h[i], VvvV.v[1].h[i]) ; } }
}

void HELPER(V6_vaddwsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVSADDSAT(32, VuV.w[i], VvV.w[i]) ; } }
}

void HELPER(V6_vaddwsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fVSADDSAT(32, VuuV.v[0].w[i], VvvV.v[0].w[i]); VddV.v[1].w[i] = fVSADDSAT(32, VuuV.v[1].w[i], VvvV.v[1].w[i]) ; } }
}

void HELPER(V6_vsubwsat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVSSUBSAT(32, VuV.w[i], VvV.w[i]) ; } }
}

void HELPER(V6_vsubwsat_dv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fVSSUBSAT(32, VuuV.v[0].w[i], VvvV.v[0].w[i]); VddV.v[1].w[i] = fVSSUBSAT(32, VuuV.v[1].w[i], VvvV.v[1].w[i]) ; } }
}

void HELPER(V6_vavgub)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = fVAVGU( 8, VuV.ub[i], VvV.ub[i]) ; } }
}

void HELPER(V6_vavgubrnd)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = fVAVGURND(8, VuV.ub[i], VvV.ub[i]) ; } }
}

void HELPER(V6_vavguh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i] = fVAVGU( 16, VuV.uh[i], VvV.uh[i]) ; } }
}

void HELPER(V6_vavguhrnd)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i] = fVAVGURND(16, VuV.uh[i], VvV.uh[i]) ; } }
}

void HELPER(V6_vavguw)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = fVAVGU( 32, VuV.uw[i], VvV.uw[i]) ; } }
}

void HELPER(V6_vavguwrnd)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = fVAVGURND(32, VuV.uw[i], VvV.uw[i]) ; } }
}

void HELPER(V6_vavgb)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = fVAVGS( 8, VuV.b[i], VvV.b[i]) ; } }
}

void HELPER(V6_vavgbrnd)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = fVAVGSRND( 8, VuV.b[i], VvV.b[i]) ; } }
}

void HELPER(V6_vnavgb)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = fVNAVGS( 8, VuV.b[i], VvV.b[i]) ; } }
}

void HELPER(V6_vavgh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fVAVGS( 16, VuV.h[i], VvV.h[i]) ; } }
}

void HELPER(V6_vavghrnd)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fVAVGSRND( 16, VuV.h[i], VvV.h[i]) ; } }
}

void HELPER(V6_vnavgh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fVNAVGS( 16, VuV.h[i], VvV.h[i]) ; } }
}

void HELPER(V6_vavgw)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVAVGS( 32, VuV.w[i], VvV.w[i]) ; } }
}

void HELPER(V6_vavgwrnd)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVAVGSRND( 32, VuV.w[i], VvV.w[i]) ; } }
}

void HELPER(V6_vnavgw)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVNAVGS( 32, VuV.w[i], VvV.w[i]) ; } }
}

void HELPER(V6_vabsdiffub)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = (VuV.ub[i] > VvV.ub[i]) ? (VuV.ub[i] - VvV.ub[i]) : (VvV.ub[i] - VuV.ub[i]) ; } }
}

void HELPER(V6_vabsdiffuh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i] = (VuV.uh[i] > VvV.uh[i]) ? (VuV.uh[i] - VvV.uh[i]) : (VvV.uh[i] - VuV.uh[i]) ; } }
}

void HELPER(V6_vabsdiffh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i] = (VuV.h[i] > VvV.h[i]) ? (VuV.h[i] - VvV.h[i]) : (VvV.h[i] - VuV.h[i]) ; } }
}

void HELPER(V6_vabsdiffw)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = (VuV.w[i] > VvV.w[i]) ? (VuV.w[i] - VvV.w[i]) : (VvV.w[i] - VuV.w[i]) ; } }
}

void HELPER(V6_vnavgub)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = fVNAVGU(8, VuV.ub[i], VvV.ub[i]) ; } }
}

void HELPER(V6_vaddcarrysat)(void * VdV_void, void * VuV_void, void * VvV_void, void * QsV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    /* QsV is *(MMQReg *)(QsV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVSATW(VuV.w[i]+VvV.w[i]+fGETQBIT(QsV,i*4)) ; } }
}

void HELPER(V6_vaddcarry)(void * VdV_void, void * QxV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    /* QxV is *(MMQReg *)(QxV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = VuV.w[i]+VvV.w[i]+fGETQBIT(QxV,i*4); fSETQBITS(QxV,4,0xF,4*i,-fCARRY_FROM_ADD32(VuV.w[i],VvV.w[i],fGETQBIT(QxV,i*4))) ; } }
}

void HELPER(V6_vsubcarry)(void * VdV_void, void * QxV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    /* QxV is *(MMQReg *)(QxV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = VuV.w[i]+~VvV.w[i]+fGETQBIT(QxV,i*4); fSETQBITS(QxV,4,0xF,4*i,-fCARRY_FROM_ADD32(VuV.w[i],~VvV.w[i],fGETQBIT(QxV,i*4))) ; } }
}

void HELPER(V6_vaddcarryo)(void * VdV_void, void * QeV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QeV is *(MMQReg *)(QeV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = VuV.w[i]+VvV.w[i]; fSETQBITS(QeV,4,0xF,4*i,-fCARRY_FROM_ADD32(VuV.w[i],VvV.w[i],0)) ; } }
}

void HELPER(V6_vsubcarryo)(void * VdV_void, void * QeV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QeV is *(MMQReg *)(QeV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = VuV.w[i]+~VvV.w[i]+1; fSETQBITS(QeV,4,0xF,4*i,-fCARRY_FROM_ADD32(VuV.w[i],~VvV.w[i],1)) ; } }
}

void HELPER(V6_vsatdw)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVSATDW(VuV.w[i],VvV.w[i]) ; } }
}

void HELPER(V6_vaddububb_sat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = fVSATUB(VuV.ub[i] + VvV.b[i]) ; } }
}

void HELPER(V6_vsubububb_sat)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = fVSATUB(VuV.ub[i] - VvV.b[i]) ; } }
}

void HELPER(V6_vaddubh)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fZE8_16(fGETUBYTE(0, VuV.uh[i])) + fZE8_16(fGETUBYTE(0, VvV.uh[i])); VddV.v[1].h[i] = fZE8_16(fGETUBYTE(1, VuV.uh[i])) + fZE8_16(fGETUBYTE(1, VvV.uh[i])) ; } }
}

void HELPER(V6_vsububh)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fZE8_16(fGETUBYTE(0, VuV.uh[i])) - fZE8_16(fGETUBYTE(0, VvV.uh[i])); VddV.v[1].h[i] = fZE8_16(fGETUBYTE(1, VuV.uh[i])) - fZE8_16(fGETUBYTE(1, VvV.uh[i])) ; } }
}

void HELPER(V6_vaddhw)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fGETHALF(0, VuV.w[i]) + fGETHALF(0, VvV.w[i]); VddV.v[1].w[i] = fGETHALF(1, VuV.w[i]) + fGETHALF(1, VvV.w[i]) ; } }
}

void HELPER(V6_vsubhw)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fGETHALF(0, VuV.w[i]) - fGETHALF(0, VvV.w[i]); VddV.v[1].w[i] = fGETHALF(1, VuV.w[i]) - fGETHALF(1, VvV.w[i]) ; } }
}

void HELPER(V6_vadduhw)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fZE16_32(fGETUHALF(0, VuV.uw[i])) + fZE16_32(fGETUHALF(0, VvV.uw[i])); VddV.v[1].w[i] = fZE16_32(fGETUHALF(1, VuV.uw[i])) + fZE16_32(fGETUHALF(1, VvV.uw[i])) ; } }
}

void HELPER(V6_vsubuhw)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fZE16_32(fGETUHALF(0, VuV.uw[i])) - fZE16_32(fGETUHALF(0, VvV.uw[i])); VddV.v[1].w[i] = fZE16_32(fGETUHALF(1, VuV.uw[i])) - fZE16_32(fGETUHALF(1, VvV.uw[i])) ; } }
}

void HELPER(V6_vaddhw_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] += fGETHALF(0, VuV.w[i]) + fGETHALF(0, VvV.w[i]); VxxV.v[1].w[i] += fGETHALF(1, VuV.w[i]) + fGETHALF(1, VvV.w[i]) ; } }
}

void HELPER(V6_vadduhw_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] += fGETUHALF(0, VuV.w[i]) + fGETUHALF(0, VvV.w[i]); VxxV.v[1].w[i] += fGETUHALF(1, VuV.w[i]) + fGETUHALF(1, VvV.w[i]) ; } }
}

void HELPER(V6_vaddubh_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].h[i] += fGETUBYTE(0, VuV.h[i]) + fGETUBYTE(0, VvV.h[i]); VxxV.v[1].h[i] += fGETUBYTE(1, VuV.h[i]) + fGETUBYTE(1, VvV.h[i]) ; } }
}

void HELPER(V6_vaddbq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VxV.ub[i]=fCONDMASK8(QvV,i,VxV.ub[i]+VuV.ub[i],VxV.ub[i]) ; } }
}

void HELPER(V6_vsubbq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VxV.ub[i]=fCONDMASK8(QvV,i,VxV.ub[i]-VuV.ub[i],VxV.ub[i]) ; } }
}

void HELPER(V6_vaddbnq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VxV.ub[i]=fCONDMASK8(QvV,i,VxV.ub[i],VxV.ub[i]+VuV.ub[i]) ; } }
}

void HELPER(V6_vsubbnq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VxV.ub[i]=fCONDMASK8(QvV,i,VxV.ub[i],VxV.ub[i]-VuV.ub[i]) ; } }
}

void HELPER(V6_vaddhq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i]=fCONDMASK16(QvV,i,VxV.h[i]+VuV.h[i],VxV.h[i]) ; } }
}

void HELPER(V6_vsubhq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i]=fCONDMASK16(QvV,i,VxV.h[i]-VuV.h[i],VxV.h[i]) ; } }
}

void HELPER(V6_vaddhnq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i]=fCONDMASK16(QvV,i,VxV.h[i],VxV.h[i]+VuV.h[i]) ; } }
}

void HELPER(V6_vsubhnq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i]=fCONDMASK16(QvV,i,VxV.h[i],VxV.h[i]-VuV.h[i]) ; } }
}

void HELPER(V6_vaddwq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i]=fCONDMASK32(QvV,i,VxV.w[i]+VuV.w[i],VxV.w[i]) ; } }
}

void HELPER(V6_vsubwq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i]=fCONDMASK32(QvV,i,VxV.w[i]-VuV.w[i],VxV.w[i]) ; } }
}

void HELPER(V6_vaddwnq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i]=fCONDMASK32(QvV,i,VxV.w[i],VxV.w[i]+VuV.w[i]) ; } }
}

void HELPER(V6_vsubwnq)(void * VxV_void, void * QvV_void, void * VuV_void)
{
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i]=fCONDMASK32(QvV,i,VxV.w[i],VxV.w[i]-VuV.w[i]) ; } }
}

void HELPER(V6_vabsb_sat)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = fVSATB(fABS(fSE8_16(VuV.b[i]))) ; } }
}

void HELPER(V6_vabsh_sat)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fVSATH(fABS(fSE16_32(VuV.h[i]))) ; } }
}

void HELPER(V6_vabsw_sat)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVSATW(fABS(fSE32_64(VuV.w[i]))) ; } }
}

void HELPER(V6_vmpybv)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8SS(fGETBYTE(0, VuV.h[i]), fGETBYTE(0, VvV.h[i])); VddV.v[1].h[i] = fMPY8SS(fGETBYTE(1, VuV.h[i]), fGETBYTE(1, VvV.h[i])) ; } }
}

void HELPER(V6_vmpybv_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].h[i] += fMPY8SS(fGETBYTE(0, VuV.h[i]), fGETBYTE(0, VvV.h[i])); VxxV.v[1].h[i] += fMPY8SS(fGETBYTE(1, VuV.h[i]), fGETBYTE(1, VvV.h[i])) ; } }
}

void HELPER(V6_vmpyubv)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].uh[i] = fMPY8UU(fGETUBYTE(0, VuV.uh[i]), fGETUBYTE(0, VvV.uh[i]) ); VddV.v[1].uh[i] = fMPY8UU(fGETUBYTE(1, VuV.uh[i]), fGETUBYTE(1, VvV.uh[i]) ) ; } }
}

void HELPER(V6_vmpyubv_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].uh[i] += fMPY8UU(fGETUBYTE(0, VuV.uh[i]), fGETUBYTE(0, VvV.uh[i]) ); VxxV.v[1].uh[i] += fMPY8UU(fGETUBYTE(1, VuV.uh[i]), fGETUBYTE(1, VvV.uh[i]) ) ; } }
}

void HELPER(V6_vmpybusv)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8US(fGETUBYTE(0, VuV.uh[i]), fGETBYTE(0, VvV.h[i])); VddV.v[1].h[i] = fMPY8US(fGETUBYTE(1, VuV.uh[i]), fGETBYTE(1, VvV.h[i])) ; } }
}

void HELPER(V6_vmpybusv_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].h[i] += fMPY8US(fGETUBYTE(0, VuV.uh[i]), fGETBYTE(0, VvV.h[i])); VxxV.v[1].h[i] += fMPY8US(fGETUBYTE(1, VuV.uh[i]), fGETBYTE(1, VvV.h[i])) ; } }
}

void HELPER(V6_vmpabusv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8US(fGETUBYTE(0, VuuV.v[0].uh[i]), fGETBYTE(0, VvvV.v[0].uh[i])) + fMPY8US(fGETUBYTE(0, VuuV.v[1].uh[i]), fGETBYTE(0, VvvV.v[1].uh[i])); VddV.v[1].h[i] = fMPY8US(fGETUBYTE(1, VuuV.v[0].uh[i]), fGETBYTE(1, VvvV.v[0].uh[i])) + fMPY8US(fGETUBYTE(1, VuuV.v[1].uh[i]), fGETBYTE(1, VvvV.v[1].uh[i])) ; } }
}

void HELPER(V6_vmpabuuv)(void * VddV_void, void * VuuV_void, void * VvvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8UU(fGETUBYTE(0, VuuV.v[0].uh[i]), fGETUBYTE(0, VvvV.v[0].uh[i])) + fMPY8UU(fGETUBYTE(0, VuuV.v[1].uh[i]), fGETUBYTE(0, VvvV.v[1].uh[i])); VddV.v[1].h[i] = fMPY8UU(fGETUBYTE(1, VuuV.v[0].uh[i]), fGETUBYTE(1, VvvV.v[0].uh[i])) + fMPY8UU(fGETUBYTE(1, VuuV.v[1].uh[i]), fGETUBYTE(1, VvvV.v[1].uh[i])) ; } }
}

void HELPER(V6_vmpyhv)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fMPY16SS(fGETHALF(0, VuV.w[i]), fGETHALF(0, VvV.w[i])); VddV.v[1].w[i] = fMPY16SS(fGETHALF(1, VuV.w[i]), fGETHALF(1, VvV.w[i])) ; } }
}

void HELPER(V6_vmpyhv_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] += fMPY16SS(fGETHALF(0, VuV.w[i]), fGETHALF(0, VvV.w[i])); VxxV.v[1].w[i] += fMPY16SS(fGETHALF(1, VuV.w[i]), fGETHALF(1, VvV.w[i])) ; } }
}

void HELPER(V6_vmpyuhv)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].uw[i] = fMPY16UU(fGETUHALF(0, VuV.uw[i]), fGETUHALF(0, VvV.uw[i])); VddV.v[1].uw[i] = fMPY16UU(fGETUHALF(1, VuV.uw[i]), fGETUHALF(1, VvV.uw[i])) ; } }
}

void HELPER(V6_vmpyuhv_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].uw[i] += fMPY16UU(fGETUHALF(0, VuV.uw[i]), fGETUHALF(0, VvV.uw[i])); VxxV.v[1].uw[i] += fMPY16UU(fGETUHALF(1, VuV.uw[i]), fGETUHALF(1, VvV.uw[i])) ; } }
}

void HELPER(V6_vmpyhvsrs)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fVSATH(fGETHALF(1,fVSAT(fROUND((fMPY16SS(VuV.h[i],VvV.h[i] )<<1))))) ; } }
}

void HELPER(V6_vmpyuhvs)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i] = fGETUHALF(1,fMPY16UU(VuV.uh[i],VvV.uh[i])) ; } }
}

void HELPER(V6_vmpyhus)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fMPY16SU(fGETHALF(0, VuV.w[i]), fGETUHALF(0, VvV.uw[i])); VddV.v[1].w[i] = fMPY16SU(fGETHALF(1, VuV.w[i]), fGETUHALF(1, VvV.uw[i])) ; } }
}

void HELPER(V6_vmpyhus_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] += fMPY16SU(fGETHALF(0, VuV.w[i]), fGETUHALF(0, VvV.uw[i])); VxxV.v[1].w[i] += fMPY16SU(fGETHALF(1, VuV.w[i]), fGETUHALF(1, VvV.uw[i])) ; } }
}

void HELPER(V6_vmpyih)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fMPY16SS(VuV.h[i], VvV.h[i]) ; } }
}

void HELPER(V6_vmpyih_acc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i] += fMPY16SS(VuV.h[i], VvV.h[i]) ; } }
}

void HELPER(V6_vmpyewuh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMPY3216SU(VuV.w[i], fGETUHALF(0, VvV.w[i])) >> 16 ; } }
}

void HELPER(V6_vmpyowh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVSATW((((fMPY3216SS(VuV.w[i], fGETHALF(1, VvV.w[i])) >> 14) + 0) >> 1)) ; } }
}

void HELPER(V6_vmpyowh_rnd)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fVSATW((((fMPY3216SS(VuV.w[i], fGETHALF(1, VvV.w[i])) >> 14) + 1) >> 1)) ; } }
}

void HELPER(V6_vmpyewuh_64)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t prod;) prod = fMPY32SU(VuV.w[i],fGETUHALF(0,VvV.w[i])); VddV.v[1].w[i] = prod >> 16; VddV.v[0].w[i] = prod << 16 ; } }
}

void HELPER(V6_vmpyowh_64_acc)(void * VxxV_void, void * VuV_void, void * VvV_void)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size8s_t prod;) prod = fMPY32SS(VuV.w[i],fGETHALF(1,VvV.w[i])) + fSE32_64(VxxV.v[1].w[i]); VxxV.v[1].w[i] = prod >> 16; fSETHALF(0, VxxV.v[0].w[i], VxxV.v[0].w[i] >> 16); fSETHALF(1, VxxV.v[0].w[i], prod & 0x0000ffff) ; } }
}

void HELPER(V6_vmpyowh_sacc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { IV1DEAD() VxV.w[i] = fVSATW(((((VxV.w[i] + fMPY3216SS(VuV.w[i], fGETHALF(1, VvV.w[i]))) >> 14) + 0) >> 1)) ; } }
}

void HELPER(V6_vmpyowh_rnd_sacc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { IV1DEAD() VxV.w[i] = fVSATW(((((VxV.w[i] + fMPY3216SS(VuV.w[i], fGETHALF(1, VvV.w[i]))) >> 14) + 1) >> 1)) ; } }
}

void HELPER(V6_vmpyieoh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = (fGETHALF(0,VuV.w[i])*fGETHALF(1,VvV.w[i])) << 16 ; } }
}

void HELPER(V6_vmpyiewuh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { IV1DEAD() VdV.w[i] = fMPY3216SU(VuV.w[i], fGETUHALF(0, VvV.w[i])) ; } }
}

void HELPER(V6_vmpyiowh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { IV1DEAD() VdV.w[i] = fMPY3216SS(VuV.w[i], fGETHALF(1, VvV.w[i])) ; } }
}

void HELPER(V6_vmpyiewh_acc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] = VxV.w[i] + fMPY3216SS(VuV.w[i], fGETHALF(0, VvV.w[i])) ; } }
}

void HELPER(V6_vmpyiewuh_acc)(void * VxV_void, void * VuV_void, void * VvV_void)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] = VxV.w[i] + fMPY3216SU(VuV.w[i], fGETUHALF(0, VvV.w[i])) ; } }
}

void HELPER(V6_vmpyub)(void * VddV_void, void * VuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].uh[i] = fMPY8UU(fGETUBYTE(0, VuV.uh[i]), fGETUBYTE((2*i+0)%4, RtV)); VddV.v[1].uh[i] = fMPY8UU(fGETUBYTE(1, VuV.uh[i]), fGETUBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vmpyub_acc)(void * VxxV_void, void * VuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].uh[i] += fMPY8UU(fGETUBYTE(0, VuV.uh[i]), fGETUBYTE((2*i+0)%4, RtV)); VxxV.v[1].uh[i] += fMPY8UU(fGETUBYTE(1, VuV.uh[i]), fGETUBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vmpybus)(void * VddV_void, void * VuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8US(fGETUBYTE(0, VuV.uh[i]), fGETBYTE((2*i+0)%4, RtV)); VddV.v[1].h[i] = fMPY8US(fGETUBYTE(1, VuV.uh[i]), fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vmpybus_acc)(void * VxxV_void, void * VuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].h[i] += fMPY8US(fGETUBYTE(0, VuV.uh[i]), fGETBYTE((2*i+0)%4, RtV)); VxxV.v[1].h[i] += fMPY8US(fGETUBYTE(1, VuV.uh[i]), fGETBYTE((2*i+1)%4, RtV)) ; } }
}

void HELPER(V6_vmpabus)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].h[i] = fMPY8US(fGETUBYTE(0, VuuV.v[0].uh[i]), fGETBYTE(0, RtV)) + fMPY16SS(fGETUBYTE(0, VuuV.v[1].uh[i]), fGETBYTE(1, RtV)); VddV.v[1].h[i] = fMPY8US(fGETUBYTE(1, VuuV.v[0].uh[i]), fGETBYTE(2, RtV)) + fMPY16SS(fGETUBYTE(1, VuuV.v[1].uh[i]), fGETBYTE(3, RtV)) ; } }
}

void HELPER(V6_vmpabus_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].h[i] += fMPY8US(fGETUBYTE(0, VuuV.v[0].uh[i]), fGETBYTE(0, RtV)) + fMPY16SS(fGETUBYTE(0, VuuV.v[1].uh[i]), fGETBYTE(1, RtV)); VxxV.v[1].h[i] += fMPY8US(fGETUBYTE(1, VuuV.v[0].uh[i]), fGETBYTE(2, RtV)) + fMPY16SS(fGETUBYTE(1, VuuV.v[1].uh[i]), fGETBYTE(3, RtV)) ; } }
}

void HELPER(V6_vmpabuu)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VddV.v[0].uh[i] = fMPY8UU(fGETUBYTE(0, VuuV.v[0].uh[i]), fGETUBYTE(0, RtV)) + fMPY8UU(fGETUBYTE(0, VuuV.v[1].uh[i]), fGETUBYTE(1, RtV)); VddV.v[1].uh[i] = fMPY8UU(fGETUBYTE(1, VuuV.v[0].uh[i]), fGETUBYTE(2, RtV)) + fMPY8UU(fGETUBYTE(1, VuuV.v[1].uh[i]), fGETUBYTE(3, RtV)) ; } }
}

void HELPER(V6_vmpabuu_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxxV.v[0].uh[i] += fMPY8UU(fGETUBYTE(0, VuuV.v[0].uh[i]), fGETUBYTE(0, RtV)) + fMPY8UU(fGETUBYTE(0, VuuV.v[1].uh[i]), fGETUBYTE(1, RtV)); VxxV.v[1].uh[i] += fMPY8UU(fGETUBYTE(1, VuuV.v[0].uh[i]), fGETUBYTE(2, RtV)) + fMPY8UU(fGETUBYTE(1, VuuV.v[1].uh[i]), fGETUBYTE(3, RtV)) ; } }
}

void HELPER(V6_vmpahb)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fMPY16SS(fGETHALF(0, VuuV.v[0].w[i]), fSE8_16(fGETBYTE(0, RtV))) + fMPY16SS(fGETHALF(0, VuuV.v[1].w[i]), fSE8_16(fGETBYTE(1, RtV))); VddV.v[1].w[i] = fMPY16SS(fGETHALF(1, VuuV.v[0].w[i]), fSE8_16(fGETBYTE(2, RtV))) + fMPY16SS(fGETHALF(1, VuuV.v[1].w[i]), fSE8_16(fGETBYTE(3, RtV))) ; } }
}

void HELPER(V6_vmpahb_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] += fMPY16SS(fGETHALF(0, VuuV.v[0].w[i]), fSE8_16(fGETBYTE(0, RtV))) + fMPY16SS(fGETHALF(0, VuuV.v[1].w[i]), fSE8_16(fGETBYTE(1, RtV))); VxxV.v[1].w[i] += fMPY16SS(fGETHALF(1, VuuV.v[0].w[i]), fSE8_16(fGETBYTE(2, RtV))) + fMPY16SS(fGETHALF(1, VuuV.v[1].w[i]), fSE8_16(fGETBYTE(3, RtV))) ; } }
}

void HELPER(V6_vmpauhb)(void * VddV_void, void * VuuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fMPY16US(fGETUHALF(0, VuuV.v[0].w[i]), fSE8_16(fGETBYTE(0, RtV))) + fMPY16US(fGETUHALF(0, VuuV.v[1].w[i]), fSE8_16(fGETBYTE(1, RtV))); VddV.v[1].w[i] = fMPY16US(fGETUHALF(1, VuuV.v[0].w[i]), fSE8_16(fGETBYTE(2, RtV))) + fMPY16US(fGETUHALF(1, VuuV.v[1].w[i]), fSE8_16(fGETBYTE(3, RtV))) ; } }
}

void HELPER(V6_vmpauhb_acc)(void * VxxV_void, void * VuuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] += fMPY16US(fGETUHALF(0, VuuV.v[0].w[i]), fSE8_16(fGETBYTE(0, RtV))) + fMPY16US(fGETUHALF(0, VuuV.v[1].w[i]), fSE8_16(fGETBYTE(1, RtV))); VxxV.v[1].w[i] += fMPY16US(fGETUHALF(1, VuuV.v[0].w[i]), fSE8_16(fGETBYTE(2, RtV))) + fMPY16US(fGETUHALF(1, VuuV.v[1].w[i]), fSE8_16(fGETBYTE(3, RtV))) ; } }
}

void HELPER(V6_vmpyh)(void * VddV_void, void * VuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].w[i] = fMPY16SS(fGETHALF(0, VuV.w[i]), fGETHALF(0, RtV)); VddV.v[1].w[i] = fMPY16SS(fGETHALF(1, VuV.w[i]), fGETHALF(1, RtV)) ; } }
}

void HELPER(V6_vmpyh_acc)(void * VxxV_void, void * VuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] = fCAST8s(VxxV.v[0].w[i]) + fMPY16SS(fGETHALF(0, VuV.w[i]), fGETHALF(0, RtV)); VxxV.v[1].w[i] = fCAST8s(VxxV.v[1].w[i]) + fMPY16SS(fGETHALF(1, VuV.w[i]), fGETHALF(1, RtV)) ; } }
}

void HELPER(V6_vmpyhsat_acc)(void * VxxV_void, void * VuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].w[i] = fVSATW(fCAST8s(VxxV.v[0].w[i]) + fMPY16SS(fGETHALF(0, VuV.w[i]), fGETHALF(0, RtV))); VxxV.v[1].w[i] = fVSATW(fCAST8s(VxxV.v[1].w[i]) + fMPY16SS(fGETHALF(1, VuV.w[i]), fGETHALF(1, RtV))) ; } }
}

void HELPER(V6_vmpyhss)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0,VdV.w[i],fVSATH(fGETHALF(1,fVSAT((fMPY16SS(fGETHALF(0,VuV.w[i]),fGETHALF(0,RtV))<<1))))); fSETHALF(1,VdV.w[i],fVSATH(fGETHALF(1,fVSAT((fMPY16SS(fGETHALF(1,VuV.w[i]),fGETHALF(1,RtV))<<1))))); ; } }
}

void HELPER(V6_vmpyhsrs)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0,VdV.w[i],fVSATH(fGETHALF(1,fVSAT(fROUND((fMPY16SS(fGETHALF(0,VuV.w[i]),fGETHALF(0,RtV))<<1)))))); fSETHALF(1,VdV.w[i],fVSATH(fGETHALF(1,fVSAT(fROUND((fMPY16SS(fGETHALF(1,VuV.w[i]),fGETHALF(1,RtV))<<1)))))); ; } }
}

void HELPER(V6_vmpyuh)(void * VddV_void, void * VuV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VddV.v[0].uw[i] = fMPY16UU(fGETUHALF(0, VuV.uw[i]),fGETUHALF(0,RtV)); VddV.v[1].uw[i] = fMPY16UU(fGETUHALF(1, VuV.uw[i]),fGETUHALF(1,RtV)) ; } }
}

void HELPER(V6_vmpyuh_acc)(void * VxxV_void, void * VuV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxxV.v[0].uw[i] += fMPY16UU(fGETUHALF(0, VuV.uw[i]),fGETUHALF(0,RtV)); VxxV.v[1].uw[i] += fMPY16UU(fGETUHALF(1, VuV.uw[i]),fGETUHALF(1,RtV)) ; } }
}

void HELPER(V6_vmpyihb)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fMPY16SS(VuV.h[i], fGETBYTE(i % 4, RtV) ) ; } }
}

void HELPER(V6_vmpyihb_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i] += fMPY16SS(VuV.h[i], fGETBYTE(i % 4, RtV) ) ; } }
}

void HELPER(V6_vmpyiwb)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMPY32SS(VuV.w[i], fGETBYTE(i % 4, RtV) ) ; } }
}

void HELPER(V6_vmpyiwb_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] += fMPY32SS(VuV.w[i], fGETBYTE(i % 4, RtV) ) ; } }
}

void HELPER(V6_vmpyiwub)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMPY32SS(VuV.w[i], fGETUBYTE(i % 4, RtV) ) ; } }
}

void HELPER(V6_vmpyiwub_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] += fMPY32SS(VuV.w[i], fGETUBYTE(i % 4, RtV) ) ; } }
}

void HELPER(V6_vmpyiwh)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMPY32SS(VuV.w[i], fGETHALF(i % 2, RtV)) ; } }
}

void HELPER(V6_vmpyiwh_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.w[i] += fMPY32SS(VuV.w[i], fGETHALF(i % 2, RtV)) ; } }
}

void HELPER(V6_vandqrt)(void * VdV_void, void * QuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QuV is *(MMQReg *)(QuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = fGETQBIT(QuV,i) ? fGETUBYTE(i % 4, RtV) : 0 ; } }
}

void HELPER(V6_vandqrt_acc)(void * VxV_void, void * QuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* QuV is *(MMQReg *)(QuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VxV.ub[i] |= (fGETQBIT(QuV,i)) ? fGETUBYTE(i % 4, RtV) : 0 ; } }
}

void HELPER(V6_vandnqrt)(void * VdV_void, void * QuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QuV is *(MMQReg *)(QuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = !fGETQBIT(QuV,i) ? fGETUBYTE(i % 4, RtV) : 0 ; } }
}

void HELPER(V6_vandnqrt_acc)(void * VxV_void, void * QuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* QuV is *(MMQReg *)(QuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VxV.ub[i] |= !(fGETQBIT(QuV,i)) ? fGETUBYTE(i % 4, RtV) : 0 ; } }
}

void HELPER(V6_vandvrt)(void * QdV_void, void * VuV_void, int32_t RtV)
{
    /* QdV is *(MMQReg *)(QdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fSETQBIT(QdV,i,((VuV.ub[i] & fGETUBYTE(i % 4, RtV)) != 0) ? 1 : 0) ; } }
}

void HELPER(V6_vandvrt_acc)(void * QxV_void, void * VuV_void, int32_t RtV)
{
    /* QxV is *(MMQReg *)(QxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fSETQBIT(QxV,i,fGETQBIT(QxV,i)|(((VuV.ub[i] & fGETUBYTE(i % 4, RtV)) != 0) ? 1 : 0)) ; } }
}

void HELPER(V6_vandvqv)(void * VdV_void, void * QvV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = fGETQBIT(QvV,i) ? VuV.b[i] : 0 ; } }
}

void HELPER(V6_vandvnqv)(void * VdV_void, void * QvV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QvV is *(MMQReg *)(QvV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.b[i] = !fGETQBIT(QvV,i) ? VuV.b[i] : 0 ; } }
}

void HELPER(V6_pred_scalar2)(void * QdV_void, int32_t RtV)
{
    /* QdV is *(MMQReg *)(QdV_void) */
    { fHIDE(int i;) for(i = 0; i < fVBYTES(); i++) fSETQBIT(QdV,i,(i < (RtV & (fVBYTES()-1))) ? 1 : 0); }
}

void HELPER(V6_pred_scalar2v2)(void * QdV_void, int32_t RtV)
{
    /* QdV is *(MMQReg *)(QdV_void) */
    { fHIDE(int i;) for(i = 0; i < fVBYTES(); i++) fSETQBIT(QdV,i,(i <= ((RtV-1) & (fVBYTES()-1))) ? 1 : 0); }
}

void HELPER(V6_shuffeqw)(void * QdV_void, void * QsV_void, void * QtV_void)
{
    /* QdV is *(MMQReg *)(QdV_void) */
    /* QsV is *(MMQReg *)(QsV_void) */
    /* QtV is *(MMQReg *)(QtV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fSETQBIT(QdV,i, (i & 2) ? fGETQBIT(QsV,i-2) : fGETQBIT(QtV,i) ) ; } }
}

void HELPER(V6_shuffeqh)(void * QdV_void, void * QsV_void, void * QtV_void)
{
    /* QdV is *(MMQReg *)(QdV_void) */
    /* QsV is *(MMQReg *)(QsV_void) */
    /* QtV is *(MMQReg *)(QtV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fSETQBIT(QdV,i, (i & 1) ? fGETQBIT(QsV,i-1) : fGETQBIT(QtV,i) ) ; } }
}

void HELPER(V6_vccombine)(void * VddV_void, int32_t PsV, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { if (fLSBOLD(PsV)) { fHIDE(int i;) fVFOREACH(8, i) { VddV.v[0].ub[i] = VvV.ub[i]; VddV.v[1].ub[i] = VuV.ub[i]; } } else {CANCEL;} }
}

void HELPER(V6_vnccombine)(void * VddV_void, int32_t PsV, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { if (fLSBOLDNOT(PsV)) { fHIDE(int i;) fVFOREACH(8, i) { VddV.v[0].ub[i] = VvV.ub[i]; VddV.v[1].ub[i] = VuV.ub[i]; } } else {CANCEL;} }
}

void HELPER(V6_vmux)(void * VdV_void, void * QtV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QtV is *(MMQReg *)(QtV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VdV.ub[i] = fGETQBIT(QtV,i) ? VuV.ub[i] : VvV.ub[i] ; } }
}

void HELPER(V6_vswap)(void * VddV_void, void * QtV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* QtV is *(MMQReg *)(QtV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { VddV.v[0].ub[i] = fGETQBIT(QtV,i) ? VuV.ub[i] : VvV.ub[i]; VddV.v[1].ub[i] = !fGETQBIT(QtV,i) ? VuV.ub[i] : VvV.ub[i] ; } }
}

void HELPER(V6_vsathub)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fSETBYTE(0, VdV.uh[i], fVSATUB(VvV.h[i])); fSETBYTE(1, VdV.uh[i], fVSATUB(VuV.h[i])) ; } }
}

void HELPER(V6_vsatwh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VdV.w[i], fVSATH(VvV.w[i])); fSETHALF(1, VdV.w[i], fVSATH(VuV.w[i])) ; } }
}

void HELPER(V6_vsatuwuh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VdV.w[i], fVSATUH(VvV.uw[i])); fSETHALF(1, VdV.w[i], fVSATUH(VuV.uw[i])) ; } }
}

void HELPER(V6_vshuffeb)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fSETBYTE(0, VdV.uh[i], fGETUBYTE(0, VvV.uh[i])); fSETBYTE(1, VdV.uh[i], fGETUBYTE(0, VuV.uh[i])) ; } }
}

void HELPER(V6_vshuffob)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fSETBYTE(0, VdV.uh[i], fGETUBYTE(1, VvV.uh[i])); fSETBYTE(1, VdV.uh[i], fGETUBYTE(1, VuV.uh[i])) ; } }
}

void HELPER(V6_vshufeh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VdV.uw[i], fGETUHALF(0, VvV.uw[i])); fSETHALF(1, VdV.uw[i], fGETUHALF(0, VuV.uw[i])) ; } }
}

void HELPER(V6_vshufoh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VdV.uw[i], fGETUHALF(1, VvV.uw[i])); fSETHALF(1, VdV.uw[i], fGETUHALF(1, VuV.uw[i])) ; } }
}

void HELPER(V6_vshuff)(void * VyV_void, void * VxV_void, int32_t RtV)
{
    /* VyV is *(MMVector *)(VyV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    { fHIDE(int offset;) for (offset=1; offset<fVBYTES(); offset<<=1) { if ( RtV & offset) { fHIDE(int k;) fVFOREACH(8, k) { if (!( k & offset)) { fSWAPB(VyV.ub[k], VxV.ub[k+offset]); } } } } }
}

void HELPER(V6_vshuffvdd)(void * VddV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int offset;) VddV.v[0] = VvV; VddV.v[1] = VuV; for (offset=1; offset<fVBYTES(); offset<<=1) { if ( RtV & offset) { fHIDE(int k;) fVFOREACH(8, k) { if (!( k & offset)) { fSWAPB(VddV.v[1].ub[k], VddV.v[0].ub[k+offset]); } } } } }
}

void HELPER(V6_vdeal)(void * VyV_void, void * VxV_void, int32_t RtV)
{
    /* VyV is *(MMVector *)(VyV_void) */
    /* VxV is *(MMVector *)(VxV_void) */
    { fHIDE(int offset;) for (offset=fVBYTES()>>1; offset>0; offset>>=1) { if ( RtV & offset) { fHIDE(int k;) fVFOREACH(8, k) { if (!( k & offset)) { fSWAPB(VyV.ub[k], VxV.ub[k+offset]); } } } } }
}

void HELPER(V6_vdealvdd)(void * VddV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int offset;) VddV.v[0] = VvV; VddV.v[1] = VuV; for (offset=fVBYTES()>>1; offset>0; offset>>=1) { if ( RtV & offset) { fHIDE(int k;) fVFOREACH(8, k) { if (!( k & offset)) { fSWAPB(VddV.v[1].ub[k], VddV.v[0].ub[k+offset]); } } } } }
}

void HELPER(V6_vshufoeh)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VddV.v[0].uw[i], fGETUHALF(0, VvV.uw[i])); fSETHALF(1, VddV.v[0].uw[i], fGETUHALF(0, VuV.uw[i])); fSETHALF(0, VddV.v[1].uw[i], fGETUHALF(1, VvV.uw[i])); fSETHALF(1, VddV.v[1].uw[i], fGETUHALF(1, VuV.uw[i])) ; } }
}

void HELPER(V6_vshufoeb)(void * VddV_void, void * VuV_void, void * VvV_void)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fSETBYTE(0, VddV.v[0].uh[i], fGETUBYTE(0, VvV.uh[i])); fSETBYTE(1, VddV.v[0].uh[i], fGETUBYTE(0, VuV.uh[i])); fSETBYTE(0, VddV.v[1].uh[i], fGETUBYTE(1, VvV.uh[i])); fSETBYTE(1, VddV.v[1].uh[i], fGETUBYTE(1, VuV.uh[i])) ; } }
}

void HELPER(V6_vdealh)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uh[i ] = fGETUHALF(0, VuV.uw[i]); VdV.uh[i+fVELEM(32)] = fGETUHALF(1, VuV.uw[i]) ; } }
}

void HELPER(V6_vdealb)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.ub[i ] = fGETUBYTE(0, VuV.uh[i]); VdV.ub[i+fVELEM(16)] = fGETUBYTE(1, VuV.uh[i]) ; } }
}

void HELPER(V6_vdealb4w)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.ub[0+i ] = fGETUBYTE(0, VvV.uw[i]); VdV.ub[fVELEM(32)+i ] = fGETUBYTE(2, VvV.uw[i]); VdV.ub[2*fVELEM(32)+i] = fGETUBYTE(0, VuV.uw[i]); VdV.ub[3*fVELEM(32)+i] = fGETUBYTE(2, VuV.uw[i]) ; } }
}

void HELPER(V6_vshuffh)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fSETHALF(0, VdV.uw[i], VuV.uh[i]); fSETHALF(1, VdV.uw[i], VuV.uh[i+fVELEM(32)]) ; } }
}

void HELPER(V6_vshuffb)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fSETBYTE(0, VdV.uh[i], VuV.ub[i]); fSETBYTE(1, VdV.uh[i], VuV.ub[i+fVELEM(16)]) ; } }
}

int32_t HELPER(V6_extractw)(void * VuV_void, int32_t RsV)
{
    int32_t RdV = 0;
    /* VuV is *(MMVector *)(VuV_void) */
    fHIDE(warn("RdN=%d VuN=%d RsN=%d RsV=0x%08x widx=%d",RdN,VuN,RsN,RsV,((RsV & (fVBYTES()-1)) >> 2));) RdV = VuV.uw[ (RsV & (fVBYTES()-1)) >> 2]; fHIDE(warn("RdV=0x%08x",RdV);)
    return RdV;
}

void HELPER(V6_vinsertwr)(void * VxV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    VxV.uw[0] = RtV;
}

void HELPER(V6_vdelta)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int offset;) fHIDE(int k;) fHIDE(mmvector_t tmp;) tmp = VuV; for (offset=fVBYTES(); (offset>>=1)>0; ) { for (k = 0; k<fVBYTES(); k++) { VdV.ub[k] = (VvV.ub[k]&offset) ? tmp.ub[k^offset] : tmp.ub[k]; } for (k = 0; k<fVBYTES(); k++) { tmp.ub[k] = VdV.ub[k]; } } }
}

void HELPER(V6_vrdelta)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int offset;) fHIDE(int k;) fHIDE(mmvector_t tmp;) tmp = VuV; for (offset=1; offset<fVBYTES(); offset<<=1){ for (k = 0; k<fVBYTES(); k++) { VdV.ub[k] = (VvV.ub[k]&offset) ? tmp.ub[k^offset] : tmp.ub[k]; } for (k = 0; k<fVBYTES(); k++) { tmp.ub[k] = VdV.ub[k]; } } }
}

void HELPER(V6_vcl0w)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i]=fCL1_4(~VuV.uw[i]) ; } }
}

void HELPER(V6_vcl0h)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i]=fCL1_2(~VuV.uh[i]) ; } }
}

void HELPER(V6_vnormamtw)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i]=fMAX(fCL1_4(~VuV.w[i]),fCL1_4(VuV.w[i]))-1; fHIDE(IV1DEAD();) ; } }
}

void HELPER(V6_vnormamth)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i]=fMAX(fCL1_2(~VuV.h[i]),fCL1_2(VuV.h[i]))-1; fHIDE(IV1DEAD();) ; } }
}

void HELPER(V6_vaddclbw)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.w[i] = fMAX(fCL1_4(~VuV.w[i]),fCL1_4(VuV.w[i])) + VvV.w[i] ; } }
}

void HELPER(V6_vaddclbh)(void * VdV_void, void * VuV_void, void * VvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i] = fMAX(fCL1_2(~VuV.h[i]),fCL1_2(VuV.h[i])) + VvV.h[i] ; } }
}

void HELPER(V6_vpopcounth)(void * VdV_void, void * VuV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.uh[i]=fCOUNTONES_2(VuV.uh[i]) ; } }
}

void HELPER(V6_vlutvvb)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fHIDE(unsigned int idx;) fHIDE(int matchval;) fHIDE(int oddhalf;) matchval = RtV & 0x7; oddhalf = (RtV >> (fVECLOGSIZE()-6)) & 0x1; idx = VuV.ub[i]; VdV.b[i] = ((idx & 0xE0) == (matchval << 5)) ? fGETBYTE(oddhalf,VvV.h[idx % fVELEM(16)]) : 0 ; } }
}

void HELPER(V6_vlutvvb_oracc)(void * VxV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fHIDE(unsigned int idx;) fHIDE(int matchval;) fHIDE(int oddhalf;) matchval = RtV & 0x7; oddhalf = (RtV >> (fVECLOGSIZE()-6)) & 0x1; idx = VuV.ub[i]; VxV.b[i] |= ((idx & 0xE0) == (matchval << 5)) ? fGETBYTE(oddhalf,VvV.h[idx % fVELEM(16)]) : 0 ; } }
}

void HELPER(V6_vlutvwh)(void * VddV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(unsigned int idx;) fHIDE(int matchval;) fHIDE(int oddhalf;) matchval = RtV & 0xF; oddhalf = (RtV >> (fVECLOGSIZE()-6)) & 0x1; idx = fGETUBYTE(0,VuV.uh[i]); VddV.v[0].h[i] = ((idx & 0xF0) == (matchval << 4)) ? fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) : 0; idx = fGETUBYTE(1,VuV.uh[i]); VddV.v[1].h[i] = ((idx & 0xF0) == (matchval << 4)) ? fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) : 0 ; } }
}

void HELPER(V6_vlutvwh_oracc)(void * VxxV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(unsigned int idx;) fHIDE(int matchval;) fHIDE(int oddhalf;) matchval = fGETUBYTE(0,RtV) & 0xF; oddhalf = (RtV >> (fVECLOGSIZE()-6)) & 0x1; idx = fGETUBYTE(0,VuV.uh[i]); VxxV.v[0].h[i] |= ((idx & 0xF0) == (matchval << 4)) ? fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) : 0; idx = fGETUBYTE(1,VuV.uh[i]); VxxV.v[1].h[i] |= ((idx & 0xF0) == (matchval << 4)) ? fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) : 0 ; } }
}

void HELPER(V6_vlutvvbi)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t uiV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fHIDE(unsigned int idx;) fHIDE(int matchval;) fHIDE(int oddhalf;) matchval = uiV & 0x7; oddhalf = (uiV >> (fVECLOGSIZE()-6)) & 0x1; idx = VuV.ub[i]; VdV.b[i] = ((idx & 0xE0) == (matchval << 5)) ? fGETBYTE(oddhalf,VvV.h[idx % fVELEM(16)]) : 0 ; } }
}

void HELPER(V6_vlutvvb_oracci)(void * VxV_void, void * VuV_void, void * VvV_void, int32_t uiV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fHIDE(unsigned int idx;) fHIDE(int matchval;) fHIDE(int oddhalf;) matchval = uiV & 0x7; oddhalf = (uiV >> (fVECLOGSIZE()-6)) & 0x1; idx = VuV.ub[i]; VxV.b[i] |= ((idx & 0xE0) == (matchval << 5)) ? fGETBYTE(oddhalf,VvV.h[idx % fVELEM(16)]) : 0 ; } }
}

void HELPER(V6_vlutvwhi)(void * VddV_void, void * VuV_void, void * VvV_void, int32_t uiV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(unsigned int idx;) fHIDE(int matchval;) fHIDE(int oddhalf;) matchval = uiV & 0xF; oddhalf = (uiV >> (fVECLOGSIZE()-6)) & 0x1; idx = fGETUBYTE(0,VuV.uh[i]); VddV.v[0].h[i] = ((idx & 0xF0) == (matchval << 4)) ? fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) : 0; idx = fGETUBYTE(1,VuV.uh[i]); VddV.v[1].h[i] = ((idx & 0xF0) == (matchval << 4)) ? fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) : 0 ; } }
}

void HELPER(V6_vlutvwh_oracci)(void * VxxV_void, void * VuV_void, void * VvV_void, int32_t uiV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(unsigned int idx;) fHIDE(int matchval;) fHIDE(int oddhalf;) matchval = uiV & 0xF; oddhalf = (uiV >> (fVECLOGSIZE()-6)) & 0x1; idx = fGETUBYTE(0,VuV.uh[i]); VxxV.v[0].h[i] |= ((idx & 0xF0) == (matchval << 4)) ? fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) : 0; idx = fGETUBYTE(1,VuV.uh[i]); VxxV.v[1].h[i] |= ((idx & 0xF0) == (matchval << 4)) ? fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) : 0 ; } }
}

void HELPER(V6_vlutvvb_nm)(void * VdV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(8, i) { fHIDE(unsigned int idx;) fHIDE(int oddhalf;) fHIDE(int matchval;) matchval = RtV & 0x7; oddhalf = (RtV >> (fVECLOGSIZE()-6)) & 0x1; idx = VuV.ub[i]; idx = (idx&0x1F) | (matchval<<5); VdV.b[i] = fGETBYTE(oddhalf,VvV.h[idx % fVELEM(16)]) ; } }
}

void HELPER(V6_vlutvwh_nm)(void * VddV_void, void * VuV_void, void * VvV_void, int32_t RtV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { fHIDE(unsigned int idx;) fHIDE(int oddhalf;) fHIDE(int matchval;) matchval = RtV & 0xF; oddhalf = (RtV >> (fVECLOGSIZE()-6)) & 0x1; idx = fGETUBYTE(0,VuV.uh[i]); idx = (idx&0x0F) | (matchval<<4); VddV.v[0].h[i] = fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]); idx = fGETUBYTE(1,VuV.uh[i]); idx = (idx&0x0F) | (matchval<<4); VddV.v[1].h[i] = fGETHALF(oddhalf,VvV.w[idx % fVELEM(32)]) ; } }
}

void HELPER(V6_vmpahhsat)(void * VxV_void, void * VuV_void, int64_t RttV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i]= fVSATH( ( ( fMPY16SS(VxV.h[i],VuV.h[i])<<1) + (fGETHALF(( (VuV.h[i]>>14)&0x3), RttV )<<15))>>16) ; } }
}

void HELPER(V6_vmpauhuhsat)(void * VxV_void, void * VuV_void, int64_t RttV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i]= fVSATH( ( fMPY16SU(VxV.h[i],VuV.uh[i]) + (fGETUHALF(((VuV.uh[i]>>14)&0x3), RttV )<<15))>>16) ; } }
}

void HELPER(V6_vmpsuhuhsat)(void * VxV_void, void * VuV_void, int64_t RttV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VxV.h[i]= fVSATH( ( fMPY16SU(VxV.h[i],VuV.uh[i]) - (fGETUHALF(((VuV.uh[i]>>14)&0x3), RttV )<<15))>>16) ; } }
}

void HELPER(V6_vlut4)(void * VdV_void, void * VuV_void, int64_t RttV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(16, i) { VdV.h[i]= fGETHALF( ((VuV.h[i]>>14)&0x3), RttV ) ; } }
}

void HELPER(V6_vmpyuhe)(void * VdV_void, void * VuV_void, int32_t RtV)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VdV.uw[i] = fMPY16UU(fGETUHALF(0, VuV.uw[i]),fGETUHALF(0,RtV)) ; } }
}

void HELPER(V6_vmpyuhe_acc)(void * VxV_void, void * VuV_void, int32_t RtV)
{
    /* VxV is *(MMVector *)(VxV_void) */
    /* VuV is *(MMVector *)(VuV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { VxV.uw[i] += fMPY16UU(fGETUHALF(0, VuV.uw[i]),fGETUHALF(0,RtV)) ; } }
}

void HELPER(V6_vgathermw)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvV_void)
{
    uint32_t EA;
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fHIDE(int element_size = 4;) fHIDE(fGATHER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { EA = RtV+VvV.uw[i]; fVLOG_VTCM_GATHER_WORD(EA, VvV.uw[i], i,MuV); } fGATHER_FINISH() }
}

void HELPER(V6_vgathermh)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvV_void)
{
    uint32_t EA;
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fHIDE(int element_size = 2;) fHIDE(fGATHER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(16, i) { EA = RtV+VvV.uh[i]; fVLOG_VTCM_GATHER_HALFWORD(EA, VvV.uh[i], i,MuV); } fGATHER_FINISH() }
}

void HELPER(V6_vgathermhw)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvvV_void)
{
    uint32_t EA;
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fHIDE(int j;) fHIDE(int element_size = 2;) fHIDE(fGATHER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { for(j = 0; j < 2; j++) { EA = RtV+VvvV.v[j].uw[i]; fVLOG_VTCM_GATHER_HALFWORD_DV(EA, VvvV.v[j].uw[i], (2*i+j),i,j,MuV); } } fGATHER_FINISH() }
}

void HELPER(V6_vgathermwq)(CPUHexagonState *env, void * QsV_void, int32_t RtV, int32_t MuV, void * VvV_void)
{
    uint32_t EA;
    /* QsV is *(MMQReg *)(QsV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fHIDE(int element_size = 4;) fHIDE(fGATHER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { EA = RtV+VvV.uw[i]; fVLOG_VTCM_GATHER_WORDQ(EA, VvV.uw[i], i,QsV,MuV); } fGATHER_FINISH() }
}

void HELPER(V6_vgathermhq)(CPUHexagonState *env, void * QsV_void, int32_t RtV, int32_t MuV, void * VvV_void)
{
    uint32_t EA;
    /* QsV is *(MMQReg *)(QsV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    { fHIDE(int i;) fHIDE(int element_size = 2;) fHIDE(fGATHER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(16, i) { EA = RtV+VvV.uh[i]; fVLOG_VTCM_GATHER_HALFWORDQ(EA, VvV.uh[i], i,QsV,MuV); } fGATHER_FINISH() }
}

void HELPER(V6_vgathermhwq)(CPUHexagonState *env, void * QsV_void, int32_t RtV, int32_t MuV, void * VvvV_void)
{
    uint32_t EA;
    /* QsV is *(MMQReg *)(QsV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fHIDE(int j;) fHIDE(int element_size = 2;) fHIDE(fGATHER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { for(j = 0; j < 2; j++) { EA = RtV+VvvV.v[j].uw[i]; fVLOG_VTCM_GATHER_HALFWORDQ_DV(EA, VvvV.v[j].uw[i], (2*i+j),i,j,QsV,MuV); } } fGATHER_FINISH() }
}

void HELPER(V6_vscattermw)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvV_void, void * VwV_void)
{
    uint32_t EA;
    /* VvV is *(MMVector *)(VvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int element_size = 4;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { EA = RtV+VvV.uw[i]; fVLOG_VTCM_WORD(EA, VvV.uw[i], VwV,i,MuV); } fSCATTER_FINISH(0) }
}

void HELPER(V6_vscattermh)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvV_void, void * VwV_void)
{
    uint32_t EA;
    /* VvV is *(MMVector *)(VvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int element_size = 2;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(16, i) { EA = RtV+VvV.uh[i]; fVLOG_VTCM_HALFWORD(EA,VvV.uh[i],VwV,i,MuV); } fSCATTER_FINISH(0) }
}

void HELPER(V6_vscattermw_add)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvV_void, void * VwV_void)
{
    uint32_t EA;
    /* VvV is *(MMVector *)(VvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int ALIGNMENT=4;) fHIDE(int element_size = 4;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { EA = (RtV+fVALIGN(VvV.uw[i],ALIGNMENT)); fVLOG_VTCM_WORD_INCREMENT(EA,VvV.uw[i],VwV,i,ALIGNMENT,MuV); } fHIDE(fLOG_SCATTER_OP(4);) fSCATTER_FINISH(1) }
}

void HELPER(V6_vscattermh_add)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvV_void, void * VwV_void)
{
    uint32_t EA;
    /* VvV is *(MMVector *)(VvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int ALIGNMENT=2;) fHIDE(int element_size = 2;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(16, i) { EA = (RtV+fVALIGN(VvV.uh[i],ALIGNMENT)); fVLOG_VTCM_HALFWORD_INCREMENT(EA,VvV.uh[i],VwV,i,ALIGNMENT,MuV); } fHIDE(fLOG_SCATTER_OP(2);) fSCATTER_FINISH(1) }
}

void HELPER(V6_vscattermwq)(CPUHexagonState *env, void * QsV_void, int32_t RtV, int32_t MuV, void * VvV_void, void * VwV_void)
{
    uint32_t EA;
    /* QsV is *(MMQReg *)(QsV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int element_size = 4;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { EA = RtV+VvV.uw[i]; fVLOG_VTCM_WORDQ(EA,VvV.uw[i], VwV,i,QsV,MuV); } fSCATTER_FINISH(0) }
}

void HELPER(V6_vscattermhq)(CPUHexagonState *env, void * QsV_void, int32_t RtV, int32_t MuV, void * VvV_void, void * VwV_void)
{
    uint32_t EA;
    /* QsV is *(MMQReg *)(QsV_void) */
    /* VvV is *(MMVector *)(VvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int element_size = 2;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(16, i) { EA = RtV+VvV.uh[i]; fVLOG_VTCM_HALFWORDQ(EA,VvV.uh[i],VwV,i,QsV,MuV); } fSCATTER_FINISH(0) }
}

void HELPER(V6_vscattermhw)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvvV_void, void * VwV_void)
{
    uint32_t EA;
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int j;) fHIDE(int element_size = 2;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { for(j = 0; j < 2; j++) { EA = RtV+VvvV.v[j].uw[i]; fVLOG_VTCM_HALFWORD_DV(EA,VvvV.v[j].uw[i],VwV,(2*i+j),i,j,MuV); } } fSCATTER_FINISH(0) }
}

void HELPER(V6_v6mpyvubs10_vxx)(void * VxxV_void, void * VuuV_void, void * VvvV_void, int32_t uiV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size2s_t c00;) fGET10BIT(c00, VvvV.v[0].uw[i], 0) fHIDE(size2s_t c01;) fGET10BIT(c01, VvvV.v[0].uw[i], 1) fHIDE(size2s_t c02;) fGET10BIT(c02, VvvV.v[0].uw[i], 2) fHIDE(size2s_t c10;) fGET10BIT(c10, VvvV.v[1].uw[i], 0) fHIDE(size2s_t c11;) fGET10BIT(c11, VvvV.v[1].uw[i], 1) fHIDE(size2s_t c12;) fGET10BIT(c12, VvvV.v[1].uw[i], 2) if (uiV == 0) { VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c10); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c11); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c12); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c00); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c01); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c02); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c10); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c11); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c12); } else if (uiV == 1) { VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c00); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c01); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c02); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c10); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c11); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c12); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c00); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c01); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c02); } else if (uiV == 2) { VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c10); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c11); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c12); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c00); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c01); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c02); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c10); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c11); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c12); } else if (uiV == 3) { VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c00); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c01); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c02); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c10); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c11); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c12); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c00); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c01); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c02); } ; } }
}

void HELPER(V6_v6mpyhubs10_vxx)(void * VxxV_void, void * VuuV_void, void * VvvV_void, int32_t uiV)
{
    /* VxxV is *(MMVectorPair *)(VxxV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(size2s_t c00;) fGET10BIT(c00, VvvV.v[0].uw[i], 0) fHIDE(size2s_t c01;) fGET10BIT(c01, VvvV.v[0].uw[i], 1) fHIDE(size2s_t c02;) fGET10BIT(c02, VvvV.v[0].uw[i], 2) fHIDE(size2s_t c10;) fGET10BIT(c10, VvvV.v[1].uw[i], 0) fHIDE(size2s_t c11;) fGET10BIT(c11, VvvV.v[1].uw[i], 1) fHIDE(size2s_t c12;) fGET10BIT(c12, VvvV.v[1].uw[i], 2) if (uiV == 0) { VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c10); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c11); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c12); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c00); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c01); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c02); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c10); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c11); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c12); } else if (uiV == 1) { VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c00); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c01); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c02); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c10); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c11); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c12); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c00); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c01); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c02); } else if (uiV == 2) { VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c10); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c11); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c12); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c00); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c01); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c02); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c10); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c11); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c12); } else if (uiV == 3) { VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c00); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c01); VxxV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c02); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c10); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c11); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c12); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c00); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c01); VxxV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c02); } ; } }
}

void HELPER(V6_v6mpyvubs10)(void * VddV_void, void * VuuV_void, void * VvvV_void, int32_t uiV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(short c00;) fGET10BIT(c00, VvvV.v[0].uw[i], 0) fHIDE(short c01;) fGET10BIT(c01, VvvV.v[0].uw[i], 1) fHIDE(short c02;) fGET10BIT(c02, VvvV.v[0].uw[i], 2) fHIDE(short c10;) fGET10BIT(c10, VvvV.v[1].uw[i], 0) fHIDE(short c11;) fGET10BIT(c11, VvvV.v[1].uw[i], 1) fHIDE(short c12;) fGET10BIT(c12, VvvV.v[1].uw[i], 2) if (uiV == 0) { VddV.v[1].w[i] = fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c10); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c11); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c12); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c00); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c01); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c02); VddV.v[0].w[i] = fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c10); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c11); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c12); } else if (uiV == 1) { VddV.v[1].w[i] = fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c00); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c01); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c02); VddV.v[0].w[i] = fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c10); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c11); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c12); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c00); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c01); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c02); } else if (uiV == 2) { VddV.v[1].w[i] = fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c10); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c11); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c12); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c00); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c01); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c02); VddV.v[0].w[i] = fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c10); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c11); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c12); } else if (uiV == 3) { VddV.v[1].w[i] = fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c00); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c01); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c02); VddV.v[0].w[i] = fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c10); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c11); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c12); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c00); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c01); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c02); } ; } }
}

void HELPER(V6_v6mpyhubs10)(void * VddV_void, void * VuuV_void, void * VvvV_void, int32_t uiV)
{
    /* VddV is *(MMVectorPair *)(VddV_void) */
    /* VuuV is *(MMVectorPair *)(VuuV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    { fHIDE(int i;) fVFOREACH(32, i) { fHIDE(short c00;) fGET10BIT(c00, VvvV.v[0].uw[i], 0) fHIDE(short c01;) fGET10BIT(c01, VvvV.v[0].uw[i], 1) fHIDE(short c02;) fGET10BIT(c02, VvvV.v[0].uw[i], 2) fHIDE(short c10;) fGET10BIT(c10, VvvV.v[1].uw[i], 0) fHIDE(short c11;) fGET10BIT(c11, VvvV.v[1].uw[i], 1) fHIDE(short c12;) fGET10BIT(c12, VvvV.v[1].uw[i], 2) if (uiV == 0) { VddV.v[1].w[i] = fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c10); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c11); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c12); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c00); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c01); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c02); VddV.v[0].w[i] = fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c10); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c11); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c12); } else if (uiV == 1) { VddV.v[1].w[i] = fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c00); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c01); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c02); VddV.v[0].w[i] = fMPY16US(fGETUBYTE(3,VuuV.v[1].uw[i]), c10); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c11); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c12); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[1].uw[i]), c00); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c01); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c02); } else if (uiV == 2) { VddV.v[1].w[i] = fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c10); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c11); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c12); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c00); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c01); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c02); VddV.v[0].w[i] = fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c10); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c11); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c12); } else if (uiV == 3) { VddV.v[1].w[i] = fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c00); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c01); VddV.v[1].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c02); VddV.v[0].w[i] = fMPY16US(fGETUBYTE(1,VuuV.v[1].uw[i]), c10); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(3,VuuV.v[0].uw[i]), c11); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(1,VuuV.v[0].uw[i]), c12); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[1].uw[i]), c00); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(2,VuuV.v[0].uw[i]), c01); VddV.v[0].w[i] += fMPY16US(fGETUBYTE(0,VuuV.v[0].uw[i]), c02); } ; } }
}

void HELPER(V6_vscattermhwq)(CPUHexagonState *env, void * QsV_void, int32_t RtV, int32_t MuV, void * VvvV_void, void * VwV_void)
{
    uint32_t EA;
    /* QsV is *(MMQReg *)(QsV_void) */
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int j;) fHIDE(int element_size = 2;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { for(j = 0; j < 2; j++) { EA = RtV+VvvV.v[j].uw[i]; fVLOG_VTCM_HALFWORDQ_DV(EA,VvvV.v[j].uw[i],VwV,(2*i+j),QsV,i,j,MuV); } } fSCATTER_FINISH(0) }
}

void HELPER(V6_vscattermhw_add)(CPUHexagonState *env, int32_t RtV, int32_t MuV, void * VvvV_void, void * VwV_void)
{
    uint32_t EA;
    /* VvvV is *(MMVectorPair *)(VvvV_void) */
    /* VwV is *(MMVector *)(VwV_void) */
    { fHIDE(int i;) fHIDE(int j;) fHIDE(int ALIGNMENT=2;) fHIDE(int element_size = 2;) fHIDE(fSCATTER_INIT( RtV, MuV, element_size);) fVLASTBYTE(MuV, element_size); fVALIGN(RtV, element_size); fVFOREACH(32, i) { for(j = 0; j < 2; j++) { EA = RtV + fVALIGN(VvvV.v[j].uw[i],ALIGNMENT); fVLOG_VTCM_HALFWORD_INCREMENT_DV(EA,VvvV.v[j].uw[i],VwV,(2*i+j),i,j,ALIGNMENT,MuV); } } fHIDE(fLOG_SCATTER_OP(2);) fSCATTER_FINISH(1) }
}

void HELPER(V6_vprefixqb)(void * VdV_void, void * QvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QvV is *(MMQReg *)(QvV_void) */
    { fHIDE(int i;) fHIDE(size1u_t acc = 0;) fVFOREACH(8, i) { acc += fGETQBIT(QvV,i); VdV.ub[i] = acc; } }
}

void HELPER(V6_vprefixqh)(void * VdV_void, void * QvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QvV is *(MMQReg *)(QvV_void) */
    { fHIDE(int i;) fHIDE(size2u_t acc = 0;) fVFOREACH(16, i) { acc += fGETQBIT(QvV,i*2+0); acc += fGETQBIT(QvV,i*2+1); VdV.uh[i] = acc; } }
}

void HELPER(V6_vprefixqw)(void * VdV_void, void * QvV_void)
{
    /* VdV is *(MMVector *)(VdV_void) */
    /* QvV is *(MMQReg *)(QvV_void) */
    { fHIDE(int i;) fHIDE(size4u_t acc = 0;) fVFOREACH(32, i) { acc += fGETQBIT(QvV,i*4+0); acc += fGETQBIT(QvV,i*4+1); acc += fGETQBIT(QvV,i*4+2); acc += fGETQBIT(QvV,i*4+3); VdV.uw[i] = acc; } }
}

