// 函数: sub_591950
// 地址: 0x591950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(arg1[3] + 4)
arg1[4] -= 1
int32_t result = arg1[4]

if (result s<= 0)
    result = 0

LeaveCriticalSection(arg1[3] + 4)

if (result s> 0)
    if (result == 1)
        void* ecx_1 = arg1[0xc]
        
        if (ecx_1 != 0)
            sub_54e140(ecx_1, &arg1[6])
else if (arg1 != 0)
    (*(*arg1 + 0x2c))(1)

return result
