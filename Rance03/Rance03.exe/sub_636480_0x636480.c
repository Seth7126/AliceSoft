// 函数: sub_636480
// 地址: 0x636480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi = arg2
uint32_t* eax_1 = arg3 + edi
struct fileimage::CFileImageAnalyser::VTable* const var_c =
    &fileimage::CFileImageAnalyser::`vftable'
uint32_t var_8 = edi

if (edi + 4 u<= eax_1 && edi + 8 u<= eax_1)
    uint32_t ecx_6 =
        ((zx.d(*(edi + 7)) << 8 | zx.d(*(edi + 6))) << 8 | zx.d(*(edi + 5))) << 8 | zx.d(*(edi + 4))
    uint32_t ebx_2
    
    if (ecx_6 == 0)
        ebx_2 = 0x30
    label_636512:
        
        if (sub_468b20(&var_c, arg1 + 0x10).b != 0 && sub_468b20(&var_c, arg1 + 0x14).b != 0
                && sub_468b20(&var_c, arg1 + 4).b != 0 && sub_468b20(&var_c, arg1 + 8).b != 0
                && sub_468b20(&var_c, arg1 + 0xc).b != 0 && edi + 0xc u<= eax_1)
            uint32_t* var_8_2 = edi + 0xc
            
            if (sub_468b20(&var_c, arg1 + 0x20).b != 0 && sub_468b20(&var_c, arg1 + 0x24).b != 0)
                uint32_t ecx_15 = *(arg1 + 0x20)
                
                if (ecx_15 s<= 0)
                    *(arg1 + 0x28) = 0
                    *(arg1 + 0x18) = 0
                else
                    *(arg1 + 0x28) = 1
                    *(arg1 + 0x18) = ebx_2 + edi
                
                if (*(arg1 + 0x24) s<= 0)
                    *(arg1 + 0x29) = 0
                    eax_1.b = 1
                    *(arg1 + 0x1c) = 0
                    return eax_1
                
                *(arg1 + 0x29) = 1
                *(arg1 + 0x1c) = ecx_15 + ebx_2 + edi
                uint32_t eax_13
                eax_13.b = 1
                return eax_13
    else if (ecx_6 - 1 u<= 1 && sub_468b20(&var_c, &arg2).b != 0)
        ebx_2 = arg2
        goto label_636512

eax_1.b = 0
return eax_1
