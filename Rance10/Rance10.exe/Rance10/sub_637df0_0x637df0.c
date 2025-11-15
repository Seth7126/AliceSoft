// 函数: sub_637df0
// 地址: 0x637df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[4] += 1
int32_t eax = arg1[0x14]

if ((eax & 0x8000000) == 0 && arg1[0x13] == 0x29)
    sub_6d0967(5)
    noreturn

if ((eax.b & 0x20) != 0 && arg1[0x13] == 0x3f)
    int16_t* esi_1 = *arg1
    
    if (esi_1 != arg1[2])
        if (*esi_1 == 0x5c && sub_636a80(arg1) != 0)
            *arg1 = &esi_1[1]
        
        *arg1 += 2
    
    sub_635790(arg1)
    int16_t* edi_1 = *arg1
    int32_t esi_2 = arg1[0x13]
    
    if (edi_1 != arg1[2])
        if (*edi_1 == 0x5c && sub_636a80(arg1) != 0)
            *arg1 = &edi_1[1]
        
        *arg1 += 2
    
    sub_635790(arg1)
    
    if (esi_2 != 0x3a)
        if (esi_2 == 0x21)
            sub_638940(arg1, 1)
            arg1[4] -= 1
            void* eax_5
            eax_5.b = 0
            return eax_5
        
        if (esi_2 != 0x3d)
            sub_6d0967(0xe)
            noreturn
        
        sub_638940(arg1, 0)
        arg1[4] -= 1
        void* eax_6
        eax_6.b = 0
        return eax_6
else if ((arg1[0x10] & 0x200) == 0)
    sub_6388f0(arg1)
    arg1[4] -= 1
    int32_t eax_9
    eax_9.b = 1
    return eax_9

struct std::_Node_base::std::_Node_end_group::VTable** esi_3 = sub_636ee0(&arg1[9], 8)
sub_635940(arg1)
sub_635a70(&arg1[9], esi_3)
arg1[4] -= 1
void* eax_8
eax_8.b = 1
return eax_8
