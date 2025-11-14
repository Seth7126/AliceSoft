// 函数: sub_443140
// 地址: 0x443140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t edi

if (arg1[0x33] == arg1[0x34])
    int32_t* ecx_1 = arg1[0x10c]
    
    if (ecx_1 != 0)
        edi = (**ecx_1)() - arg1[0x10d]
    else
        edi = 0
else
    int32_t* ecx = *(data_75d4e4 + 0x93c)
    
    if (ecx != 0)
        int32_t var_10_1 = arg1[0x10b]
        edi = sub_476940(ecx)
    else
        edi = 0

EnterCriticalSection(arg1[6] + 4)

if (arg1[0x295] != 0 && edi s>= *(*arg1[0x294] + 0x10))
    int32_t var_10_3 = edi
    sub_443210(arg1)
    var_4 = arg1[0x294]
    sub_418580(&var_4)

if (arg1[0x295] == 0 || edi s< *(*arg1[0x294] + 0x10) || edi s> var_4[4])
    arg1[0x109] = sub_4429b0(&arg1[0xc], edi)

HANDLE hEvent = arg1[4]

if (hEvent != 0)
    SetEvent(hEvent)

return LeaveCriticalSection(arg1[6] + 4)
