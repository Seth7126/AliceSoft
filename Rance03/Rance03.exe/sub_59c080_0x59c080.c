// 函数: sub_59c080
// 地址: 0x59c080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2
(*(*esi + 0xc4))(0)
(*(*esi + 0xc8))(0)
(*(*esi + 0xbc))(0)
int32_t xmm3 = (zx.o(0)).d

if (((*(arg7 + 0x1bc) - *(arg7 + 0x1b8)) & 0xfffffffc) s> 0xc)
    arg2 = *(*(arg7 + 0x1b8) + 0xc)
else
    arg2 = nullptr

int32_t xmm7

if (((*(arg7 + 0x1bc) - *(arg7 + 0x1b8)) & 0xfffffffc) s> 0x10)
    xmm7 = *(*(arg7 + 0x1b8) + 0x10)
else
    xmm7 = (zx.o(0)).d

int32_t xmm6

if (((*(arg7 + 0x1bc) - *(arg7 + 0x1b8)) & 0xfffffffc) s> 0x14)
    xmm6 = *(*(arg7 + 0x1b8) + 0x14)
else
    xmm6 = (zx.o(0)).d

int32_t xmm5

if (((*(arg7 + 0x1bc) - *(arg7 + 0x1b8)) & 0xfffffffc) s> 0x18)
    xmm5 = *(*(arg7 + 0x1b8) + 0x18)
else
    xmm5 = (zx.o(0)).d

int32_t xmm4

if (((*(arg7 + 0x1bc) - *(arg7 + 0x1b8)) & 0xfffffffc) s> 0x1c)
    xmm4 = *(*(arg7 + 0x1b8) + 0x1c)
else
    xmm4 = (zx.o(0)).d

if (((*(arg7 + 0x1bc) - *(arg7 + 0x1b8)) & 0xfffffffc) s> 0x20)
    xmm3 = *(*(arg7 + 0x1b8) + 0x20)

char eax_29 = (*(*esi + 0xe0))(*(arg6 + 0x44), *(arg6 + 0x48), *(arg6 + 0x54), *(arg6 + 0x4c), 
    *(arg6 + 0x50), arg2, xmm7, xmm6, xmm5, xmm4, xmm3, arg4, arg5)

if (eax_29 != 0)
    int32_t* ecx_5 = *(arg1 + 0x3c)
    
    if (ecx_5 != 0 && (*(*ecx_5 + 0x34))() != 0 && (*(*arg3 + 0x2c))(0, 0, 0, 1) != 0)
        int32_t* ecx_7 = *(arg1 + 0x10)
        
        if (ecx_7 != 0 && (*(*ecx_7 + 0x24))() != 0)
            eax_29 = (*(**(arg1 + 0x10) + 0x30))()
            
            if (eax_29 != 0)
                int32_t* ecx_9 = *(arg1 + 0x3c)
                
                if (ecx_9 != 0)
                    eax_29 = (*(*ecx_9 + 0x38))()
                
                if ((ecx_9 == 0 || eax_29 != 0) && (*(*esi + 0xe8))() != 0)
                    return sub_52b200(arg1 + 0x54, esi, *(arg1 + 0x3c), arg4, arg5) != 0

return 0
