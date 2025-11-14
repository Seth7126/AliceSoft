// 函数: sub_1000e380
// 地址: 0x1000e380
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* eax = arg1[0x2b]

if (eax != 0)
    (*(*eax + 8))(eax)
    arg1[0x2b] = 0

void* eax_1 = arg1[0x1e]

if (*(eax_1 + 0x18) == 0)
    return 1

if (arg1[5] != 0 && *(eax_1 + 0x25) == 0)
    return 0x80040224

EnterCriticalSection(&arg1[0x25])
arg1[0x2c] = 0
LeaveCriticalSection(&arg1[0x25])
(*(*arg1 + 0x64))()
(*(*arg1 + 0x70))()
bool cond:0 = arg1[5] != 2
arg1[0x18] = 0

if (not(cond:0))
    (*(*arg1 + 0x80))()

return 0
