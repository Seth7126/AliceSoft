// 函数: sub_534d80
// 地址: 0x534d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* ebx = arg6
int32_t* esi = arg5
void* edi = arg2

if (arg3 != edi && arg4 != esi)
    bool cond:0_1
    
    do
        int32_t var_18_1 = *(edi - 4)
        edi -= 4
        esi -= 4
        int16_t top = top + 2
        ebx -= 4
        int32_t eax_2
        
        if (sub_535480(*esi, var_18_1) == 0)
            eax_2 = *esi
            edi += 4
            cond:0_1 = arg4 != esi
        else
            eax_2 = *edi
            esi = &esi[1]
            cond:0_1 = arg3 != edi
        
        *ebx = eax_2
    while (cond:0_1)

void* esi_2 = (esi - arg4) & 0xfffffffc
void* ebx_1 = ebx - esi_2
_memcpy(ebx_1, arg4, esi_2)
int32_t ecx = (edi - arg3) s>> 2 << 2
void* result = ebx_1 - ecx
_memcpy(result, arg3, ecx)
return result
