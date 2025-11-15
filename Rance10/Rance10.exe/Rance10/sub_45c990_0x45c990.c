// 函数: sub_45c990
// 地址: 0x45c990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edx = arg2
uint32_t var_8 = edx
void* esi = edx + arg3
struct fileimage::CFileImageAnalyser::VTable* const var_c =
    &fileimage::CFileImageAnalyser::`vftable'

if (edx + 4 u<= esi)
    void* edi_1 = edx + 8
    
    if (edi_1 u<= esi)
        void* var_8_1 = edi_1
        uint32_t ecx_6 = ((zx.d(*(edx + 7)) << 8 | zx.d(*(edx + 6))) << 8 | zx.d(*(edx + 5))) << 8
            | zx.d(*(edx + 4))
        uint32_t ecx_8
        
        if (ecx_6 == 0)
            ecx_8 = 0x30
        label_45ca25:
            
            if (edi_1 + 0x20 u<= esi)
                *(arg1 + 4) = ecx_8
                *(arg1 + 0x14) = sub_6c94f0(&var_c)
                *(arg1 + 0x18) = sub_6c94f0(&var_c)
                *(arg1 + 8) = sub_6c94f0(&var_c)
                *(arg1 + 0xc) = sub_6c94f0(&var_c)
                void* var_8_2 = var_8_1 + 4
                *(arg1 + 0x10) = sub_6c94f0(&var_c)
                *(arg1 + 0x24) = sub_6c94f0(&var_c)
                *(arg1 + 0x28) = sub_6c94f0(&var_c)
                uint32_t eax_10
                eax_10.b = 1
                return eax_10
        else if (ecx_6 - 1 u<= 1 && sub_61ec90(&var_c, &arg2).b != 0)
            edi_1 = var_8_1
            ecx_8 = arg2
            goto label_45ca25

uint32_t* eax
eax.b = 0
return eax
