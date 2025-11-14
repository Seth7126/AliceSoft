// 函数: sub_65dbb0
// 地址: 0x65dbb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = arg2

if (i s< 0)
    arg1[1] = 0
    *arg1 = 0
    return arg1

if (i u> 0x1555555)
    sub_69a4fc()
    noreturn

int32_t edi = 0
int32_t eax_6
int32_t edx

for (; i s> 0; i = (eax_6 - edx) s>> 1)
    int32_t var_10_1 = 0x75c5de
    edi = sub_69b730(i, edi, i * 0xc0)
    
    if (edi != 0)
        break
    
    edx:eax_6 = sx.q(i)

*arg1 = edi
arg1[1] = i
return arg1
