// 函数: sub_487840
// 地址: 0x487840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x934)

if (ecx != 0)
    (**ecx)(1)
    *(arg1 + 0x934) = 0

int32_t* ecx_1 = *(arg1 + 0x930)

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(1)
    *(arg1 + 0x930) = 0

int32_t* ecx_2 = *(arg1 + 0x92c)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x92c) = 0

int32_t* ecx_3 = *(arg1 + 0x928)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x928) = 0

*(arg1 + 0x918) = *(arg1 + 0x914)
void* result = sub_485120(arg1 + 0xc)
*(arg1 + 4) = 0
return result
