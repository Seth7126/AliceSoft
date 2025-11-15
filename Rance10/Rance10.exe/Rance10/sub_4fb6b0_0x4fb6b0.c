// 函数: sub_4fb6b0
// 地址: 0x4fb6b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x208) != 0)
    return 

int32_t eax_1 = *(arg1 + 8)
void* ebx_1 = data_7fcb64
*(arg1 + 0x208) = 1
*(arg1 + 0x1e4) = eax_1
*(arg1 + 0x1f4) = eax_1
*(arg1 + 0x1f8) = eax_1
*(arg1 + 0x1fc) = eax_1
*(arg1 + 0x200) = eax_1
__builtin_memset(arg1 + 0xc, 0, 0x31)
*(arg1 + 0x1e8) = 0
*(arg1 + 0x1ec) = 0
*(arg1 + 0x1f0) = 0
*(arg1 + 0x244) = 0x1f5
int16_t eax_2

if (sub_47d5a0(ebx_1).b != 0)
    eax_2 = (***(ebx_1 + 0x1c))()
    
    if (eax_2.b != 0)
        eax_2.b = (GetKeyState(1) u>> 0xf).b & 1
else
    eax_2.b = 0

void* ebx_2 = data_7fcb64
*(arg1 + 0x38) = eax_2.b
int16_t eax_5 = sub_47d5a0(ebx_2)

if (eax_5.b != 0)
    eax_5 = (***(ebx_2 + 0x1c))()
    
    if (eax_5.b != 0)
        eax_5.b = (GetKeyState(2) u>> 0xf).b & 1

void* ebx_3 = data_7fcb64
*(arg1 + 0x39) = eax_5.b

if (sub_47d5a0(ebx_3) == 0)
    *(arg1 + 0x3a) = 0
    return 

if ((***(ebx_3 + 0x1c))() == 0)
    *(arg1 + 0x3a) = 0
    return 

int16_t eax
eax.b = (GetKeyState(4) u>> 0xf).b & 1
*(arg1 + 0x3a) = eax.b
