// 函数: sub_440c40
// 地址: 0x440c40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
int32_t* esi = arg1
int32_t* var_4 = esi
int32_t eax_1 = (**arg2)()
int32_t eax_3

if (eax_1 == 0xd)
    eax_3 = (*(*arg2 + 0xc))()

if (eax_1 != 0xd || eax_3 != 1)
    int32_t eax_5
    
    if ((**arg2)() != 0x11)
        eax_5.b = 0
        return eax_5
    
    if ((*(*arg2 + 0xc))() != 0xffffffff)
        eax_5.b = 0
        return eax_5

int32_t* eax_8 = (*(*arg2 + 8))()

if (eax_8 s<= 0)
    sub_4413a0(esi)
    int32_t* eax_9
    eax_9.b = 1
    return eax_9

sub_4412c0(esi, eax_8)
int32_t edi = 0

if (eax_8 s> 0)
    int32_t ebp_1 = 0
    
    do
        if (sub_43f6e0(*esi + ebp_1, (*(*arg2 + 0x1c))(edi)) == 0)
            return 0
        
        esi = var_4
        edi += 1
        ebp_1 += 0x10
    while (edi s< eax_8)

return 1
