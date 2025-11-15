// 函数: sub_654370
// 地址: 0x654370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[5]

if (eax != 0xc8 && eax != 0xc9)
    *(*arg1 + 0x14) = 0x15
    *(*arg1 + 0x18) = arg1[5]
    (**arg1)(arg1)

int32_t result = sub_654410(arg1)

if (result == 1)
    return 1

if (result != 2)
    return result

*(*arg1 + 0x14) = 0x35
(**arg1)(arg1)
void* eax_8 = arg1[1]

if (eax_8 != 0)
    (*(eax_8 + 0x24))(arg1, 1)
    
    if (arg1[4].b != 0)
        arg1[5] = 0xc8
        arg1[0x45] = 0
        return 2
    
    arg1[5] = 0x64

return 2
