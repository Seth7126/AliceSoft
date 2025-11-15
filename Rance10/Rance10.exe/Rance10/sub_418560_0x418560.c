// 函数: sub_418560
// 地址: 0x418560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x28)
int32_t eax

if (ecx != 0)
    eax = (**ecx)()
else
    eax = 0xffffffff

(***(arg1 + 0x1c))(arg1 + 0x40, arg1 + 0x44, eax)

if ((*(**(arg1 + 0x28) + 0x10))() == 0)
    (*(**(arg1 + 0x28) + 8))()
    *(arg1 + 0x38) = 0

*(arg1 + 0x3c) = 2
return sub_4188f0(arg1) __tailcall
