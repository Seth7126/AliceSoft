// 函数: sub_5bd030
// 地址: 0x5bd030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1[0xc]

if (ecx != 0)
    sub_403160(ecx, (arg1[0xe] - ecx) s>> 2, 4)
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

void* edi = arg1[9]

if (edi != 0)
    sub_403160(edi, (arg1[0xb] - edi) s/ 0x78, 0x78)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

int32_t eax_9 = arg1[5]

if (eax_9 u>= 0x10)
    eax_9 = sub_403160(*arg1, eax_9 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax_9

char* eax_10 = *arg1
*eax_10 = 0
return eax_10
