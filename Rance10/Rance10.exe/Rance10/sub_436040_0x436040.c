// 函数: sub_436040
// 地址: 0x436040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* eax = sub_435fc0(arg1)
EnterCriticalSection(arg1[6] + 4)

if (arg1[0x27a] != 0 && eax s>= *(*arg1[0x279] + 0x10))
    void* var_10_1 = eax
    sub_4360d0(arg1)
    var_4 = arg1[0x279]
    sub_429da0(&var_4)

if (arg1[0x27a] == 0 || eax s< *(*arg1[0x279] + 0x10) || eax s> var_4[4])
    arg1[0x109] = sub_435130(&arg1[0xc], eax)

HANDLE hEvent = arg1[4]

if (hEvent != 0)
    SetEvent(hEvent)

return LeaveCriticalSection(arg1[6] + 4)
