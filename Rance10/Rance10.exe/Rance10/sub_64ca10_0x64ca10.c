// 函数: sub_64ca10
// 地址: 0x64ca10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1
int32_t ebx
ebx.b = arg2
void* var_4 = ebp
int32_t (** eax_2)(int32_t* arg1, int32_t arg2) = (**(ebp + 4))(ebp, 1, 0x68)
int32_t (** esi)(int32_t* arg1, int32_t arg2) = eax_2
*(ebp + 0x184) = esi
*esi = sub_64c2b0

if (ebx.b == 0)
    void* eax_12 = (*(*(ebp + 4) + 4))(ebp, 1, 0x500)
    esi[6] = eax_12
    esi[0xb] = eax_12 + 0x280
    esi[7] = eax_12 + 0x80
    esi[0xc] = eax_12 + 0x300
    esi[8] = eax_12 + 0x100
    esi[0xd] = eax_12 + 0x380
    esi[9] = eax_12 + 0x180
    esi[0xe] = eax_12 + 0x400
    eax_2 = eax_12 + 0x480
    esi[0xa] = eax_12 + 0x200
    esi[0xf] = eax_2
    esi[0x10] = 0
else
    int32_t i_1 = 0
    
    if (*(ebp + 0x4c) s> 0)
        void* edx_1 = *(ebp + 0x54) + 8
        void* var_8 = edx_1
        void* var_c = &esi[0x10]
        int32_t i
        
        do
            int32_t ecx = *(edx_1 + 4)
            int32_t edi_1 = *edx_1
            int32_t esi_4 = *(edx_1 + 0x18) - 1 + ecx
            int32_t ebx_3 = *(edx_1 + 0x14) - 1 + edi_1
            int32_t eax_8 = (*(*(ebp + 4) + 0x14))(var_4, 1, 0, 
                ebx_3 - mods.dp.d(sx.q(ebx_3), edi_1), esi_4 - mods.dp.d(sx.q(esi_4), ecx), ecx)
            ebp = var_4
            edx_1 = var_8 + 0x58
            *var_c = eax_8
            i = i_1 + 1
            var_c += 4
            i_1 = i
            var_8 = edx_1
        while (i s< *(ebp + 0x4c))
        
        return i

return eax_2
