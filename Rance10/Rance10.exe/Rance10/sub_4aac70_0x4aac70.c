// 函数: sub_4aac70
// 地址: 0x4aac70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t var_58
sub_4b9c00(&var_58)
int32_t edi = *(arg1 + 0xc4)
void* esi = *(arg1 + 0xc0)

if (esi != edi)
    void* ebx_1 = *(arg1 + 0xbc)
    void* ebp_1 = data_7fcba0
    
    do
        void* ecx_1 = ebp_1
        
        if (ebx_1 != 0)
            ecx_1 = *(ebx_1 + 8)
        
        sub_4b9d50(&var_58, *(esi + 0xc), *(esi + 0x10), ecx_1, *(esi + 0x14), *(esi + 0x18), 
            *(esi + 4), *(esi + 8), zx.d(*esi), zx.d(*(esi + 1)))
        esi += 0x28
    while (esi != edi)

*arg2 = var_58
int128_t var_48
arg2[1] = var_48
int128_t var_38
arg2[2] = var_38
int128_t var_28
arg2[3] = var_28
int128_t var_18
arg2[4] = var_18
int64_t var_8
arg2[5].q = var_8
return arg2
