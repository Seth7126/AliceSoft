// 函数: sub_558b50
// 地址: 0x558b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = arg2
char* ecx = *(esi + 4)
int32_t ebx = *(esi + 8)

if (&ecx[4] u> ebx)
    int32_t eax
    eax.b = 0
    return eax

uint32_t edi_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(esi + 4) = &ecx[4]

if (&ecx[8] u<= ebx)
    uint32_t ebx_7 = ((zx.d(ecx[7]) << 8 | zx.d(ecx[6])) << 8 | zx.d(ecx[5])) << 8 | zx.d(ecx[4])
    *(esi + 4) = &ecx[8]
    uint32_t var_58
    uint32_t var_54
    uint32_t var_50
    uint32_t var_4c
    uint32_t var_48
    uint32_t var_44
    uint32_t var_40
    uint32_t var_3c
    uint32_t var_38
    
    if (sub_61ec90(esi, &var_40).b != 0 && sub_61ec90(esi, &var_3c).b != 0
            && sub_61ec90(esi, &var_38).b != 0 && sub_6c9300(esi, &var_44).b != 0
            && sub_6c9300(esi, &var_48).b != 0 && sub_61ec90(esi, &var_54).b != 0
            && sub_61ec90(esi, &var_50).b != 0 && sub_61ec90(esi, &var_4c).b != 0
            && sub_61ec90(esi, &arg2).b != 0 && sub_61ec90(esi, &var_58).b != 0)
        uint32_t var_6c_11 = var_54
        uint32_t xmm0 = var_48
        uint32_t var_70 = var_50
        uint32_t var_74 = var_4c
        *(arg1 + 0x38) = arg2
        *(arg1 + 0x3c) = var_58
        struct textsurface::CTextSurfaceProperty::VTable* var_34
        sub_4b50b0(arg1 + 4, 
            sub_643850(&var_34, edi_6, ebx_7, var_38, var_3c, var_40, var_44, xmm0, var_74, var_70, 
                var_6c_11))
        void* eax_12
        eax_12.b = 1
        return eax_12

uint32_t* eax_4
eax_4.b = 0
return eax_4
