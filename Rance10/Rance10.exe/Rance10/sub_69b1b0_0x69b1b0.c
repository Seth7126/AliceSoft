// 函数: sub_69b1b0
// 地址: 0x69b1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1[1]

if (edi == 0)
    arg1[1] = arg3
    *arg1 = arg2
    return arg2

bool cond:0 = edi[1] != 1
edi[1]
edi[1] -= 1

if (not(cond:0))
    (**edi)()
    int32_t ebx_1 = edi[2]
    edi[2] -= 1
    
    if (ebx_1 == 1)
        (*(*edi + 4))()

arg1[1] = arg3
*arg1 = arg2
return arg2
