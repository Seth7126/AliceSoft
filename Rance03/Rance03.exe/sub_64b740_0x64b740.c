// 函数: sub_64b740
// 地址: 0x64b740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edi = arg1
int32_t ebp = arg2[4]
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t ebx = edi[4]

if (edi[5] u>= 0x10)
    arg1 = *edi

int32_t eax = ebp

if (ebx u< ebp)
    eax = ebx

int32_t result = sub_405190(eax, edx, arg1, eax)
bool cond:3 = result s< 0

if (result != 0)
    goto label_64b783

if (ebx u>= ebp)
    result.b = ebx != ebp
    cond:3 = result s< 0
label_64b783:
    
    if (not(cond:3) && (sub_40d320(edi, arg2).b != 0 || edi[6] s>= arg2[6]))
        result.b = 0
        return result

result.b = 1
return result
