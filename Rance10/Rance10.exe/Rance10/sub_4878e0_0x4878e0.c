// 函数: sub_4878e0
// 地址: 0x4878e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* eax_2 = (**arg2)(0x760294)

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

int32_t* ecx_1 = *(arg1 + 0x928)

if (ecx_1 != eax_2)
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        *(arg1 + 0x928) = 0
    
    *(arg1 + 0x928) = eax_2
    (**eax_2)()

(*(*eax_2 + 4))()
*(arg1 + 0x920) = arg1 + 0x924
sub_4857e0(arg1 + 0xc)
sub_4852d0(arg1 + 0xc)
(**(arg1 + 0xc))((***(arg1 + 0x920))())
int32_t eax_8
eax_8.b = 1
return eax_8
