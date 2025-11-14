// 函数: sub_4468b0
// 地址: 0x4468b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi
int32_t var_28 = edi
void* esi = arg1
struct apeg::CBitReader::VTable* const var_c = &apeg::CBitReader::`vftable'
void* var_2c = arg1
void* var_10 = esi
int32_t var_4 = 0
void* ebx = esi + 0x1c
void* var_14 = ebx
*arg3 = sub_443460(&var_c)
sub_446320(ebx)
int32_t i = 0
void* edi_5

if (*(esi + 0x14) u<= 0)
    edi_5 = arg2
else
    do
        int32_t* ecx_3 = var_4 & 7
        int32_t* esi_1 = *arg4
        void* edx_3 = arg4[1] - esi_1
        uint32_t esi_3 = (var_4 + 8) u>> 3
        uint32_t eax_5 = zx.d(*((var_4 u>> 3) + esi_1)) << (ecx_3.b + 0x18)
        
        if (esi_3 + 1 u< edx_3)
            char edx_4 = ecx_3.b
            ebx = var_14
            eax_5 |=
                zx.d(*(esi_1 + esi_3 + 1)) << (edx_4 + 8) | zx.d(*(esi_1 + esi_3)) << (edx_4 + 0x10)
        else if (esi_3 u< edx_3)
            eax_5 |= zx.d(*(esi_1 + esi_3)) << (ecx_3.b + 0x10)
        
        int32_t edi_3 = var_4 + 1
        var_4 = edi_3
        uint32_t eax_8 = ((eax_5 & 0x8fffffff) | 0x8000000) u>> 0x1b
        *(ebx + 0x28) = eax_8
        
        if (((eax_8 u>> 4).b & 1) != 0)
            *(ebx + 8) = sub_443540(&var_c, 5)
            var_4 = edi_3 + 5
        
        _memset(ebx + 0x30, 0, 0x300)
        
        if (sub_446490(ebx, &var_c) == 0)
            return 0
        
        edi_5 = arg2
        
        if (sub_443e10(edi_5, i, ebx) == 0)
            return 0
        
        esi = var_10
        i += 1
    while (i u< *(esi + 0x14))

void* result = *(esi + 0x18)

if (result != 0)
    *(result + 0x30) = 0

*(edi_5 + 0x30) = 1
result.b = 1
*(esi + 0x18) = edi_5
return result
