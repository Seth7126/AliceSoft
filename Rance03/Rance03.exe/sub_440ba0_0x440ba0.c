// 函数: sub_440ba0
// 地址: 0x440ba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (**arg2)()
int32_t eax_3

if (eax_1 == 0xa)
    eax_3 = (*(*arg2 + 0xc))()

if (eax_1 != 0xa || eax_3 != 1)
    int32_t eax_5
    
    if ((**arg2)() != 0xe)
        eax_5.b = 0
        return eax_5
    
    if ((*(*arg2 + 0xc))() != 0xffffffff)
        eax_5.b = 0
        return eax_5

int32_t eax_8 = (*(*arg2 + 8))()

if (eax_8 s<= 0)
    arg1[1] = *arg1
    int32_t eax_9
    eax_9.b = 1
    return eax_9

sub_42f470(arg1, eax_8)
int32_t esi = 0

if (eax_8 s> 0)
    do
        int32_t* eax_12 = (*(*arg2 + 0x10))(esi)
        
        if (eax_12 == 0)
            eax_12.b = 0
            return eax_12
        
        *(*arg1 + (esi << 2)) = *eax_12
        esi += 1
    while (esi s< eax_8)

int32_t eax_10
eax_10.b = 1
return eax_10
