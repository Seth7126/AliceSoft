// 函数: sub_4788b0
// 地址: 0x4788b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* lpFileName

if (arg1[5] u< 0x10)
    lpFileName = arg1
else
    lpFileName = *arg1

uint32_t eax = GetFileAttributesA(lpFileName)

if (eax != 0xffffffff)
    eax.b = not.b((eax u>> 4).b)
    eax.b &= 1
    
    if (eax.b != 0)
        *arg2 = sub_67f070(arg1)
        int32_t eax_1
        eax_1.b = 1
        return eax_1

*arg2 = 0
eax.b = 0
return eax
