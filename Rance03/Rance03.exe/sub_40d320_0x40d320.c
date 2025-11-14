// 函数: sub_40d320
// 地址: 0x40d320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[4]
int32_t* esi = arg2

if (arg1[5] u>= 0x10)
    arg1 = *arg1

int32_t edi = esi[4]

if (esi[5] u>= 0x10)
    esi = *esi

int32_t eax = ebx

if (edi u< ebx)
    eax = edi

int32_t result = sub_405190(eax, arg1, esi, eax)
bool cond:3 = result s< 0

if (result == 0)
    if (edi u< ebx)
        int32_t eax_1
        eax_1.b = true
        return 0xffffff01
    
    result.b = edi != ebx
    cond:3 = result s< 0

result.b = cond:3
return result
