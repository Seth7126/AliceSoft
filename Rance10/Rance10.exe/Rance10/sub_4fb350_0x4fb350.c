// 函数: sub_4fb350
// 地址: 0x4fb350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = data_7fcb70
int32_t eax = *(arg1 + 8)
*(arg1 + 0x208) = 0
*(arg1 + 0x1e4) = eax
*(arg1 + 0x1f4) = eax
*(arg1 + 0x1f8) = eax
*(arg1 + 0x1fc) = eax
*(arg1 + 0x200) = eax
__builtin_memset(arg1 + 0xc, 0, 0x2c)
*(arg1 + 0x1f0) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x244) = 0x1f5
int32_t result = (**ecx)()
int32_t* edi = data_7fcb70

if (edi != 0)
    *(arg1 + 0x204) = (*(edi[1] + 8))(0x7659a0, 0xa)
    result = (*(*edi + 4))()

if (*(arg1 + 0x204) s<= 0)
    *(arg1 + 0x204) = 0xa

return result
