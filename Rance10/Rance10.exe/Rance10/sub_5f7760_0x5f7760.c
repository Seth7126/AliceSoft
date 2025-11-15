// 函数: sub_5f7760
// 地址: 0x5f7760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg3
void* result = arg4
void* ebx = arg2

if (ebx s< 0)
    result += ebx
    ebx = nullptr

char* eax_1 = (*(*arg3 + 8))()

if (ebx + result s> eax_1)
    eax_1 = (*(*arg3 + 8))()
    result = eax_1 - ebx

void* edi = nullptr

if (result s> 0)
    do
        eax_1 = sub_5f6460(eax_1, edi + ebx, arg3, arg5)
        edi += 1
    while (edi s< result)

return result
