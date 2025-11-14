// 函数: sub_410f30
// 地址: 0x410f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = zx.d(arg3)

if (eax == 1)
    sub_411060()
    *(arg1 + 8) = sub_411010(arg2, arg1 + 0xc)
    EndDialog(arg2, 1)
else
    if (eax == 2)
        bool cond:0 = *(arg1 + 0x20) u< 0x10
        void* eax_5 = arg1 + 0xc
        *(eax_5 + 0x10) = 0
        
        if (not(cond:0))
            eax_5 = *eax_5
        
        *eax_5 = 0
        *(arg1 + 8) = 0
        EndDialog(arg2, 0)
        return 1
    
    if (eax == 0x9cdb)
        sub_410fc0(arg2)

return 1
