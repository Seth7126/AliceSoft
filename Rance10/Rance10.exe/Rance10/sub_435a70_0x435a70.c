// 函数: sub_435a70
// 地址: 0x435a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_435960(arg1)
int32_t __saved_edi = arg2
char eax = sub_434130(arg1 + 0x1c)

if (eax == 0)
    return eax

struct kiwi::CSoundChannel::VTable** eax_1 = *(arg1 + 0xc8)

if (eax_1 == *(arg1 + 0xcc))
    int32_t* ecx_5 = data_7fcb88
    
    if (ecx_5 != 0)
        *(arg1 + 0x430) = (**ecx_5)(0x75dc90)
        int32_t eax_5
        eax_5.b = 1
        return eax_5
else
    void* ecx_1 = data_7fcb6c[0x24d]
    
    if (ecx_1 != 0 && sub_487f80(ecx_1, arg3, eax_1, *(arg1 + 0xcc) - eax_1, arg4).b != 0)
        void* ecx_2 = data_7fcb6c[0x24d]
        
        if (ecx_2 != 0)
            int32_t var_c_2 = 1
            eax_1 = sub_47ffe0(ecx_2 + 0x5c, arg3)
            
            if (eax_1 != 0)
                (*(eax_1[1]->vFunc_0 + 0x2c))(1)
                *(arg1 + 0x42c) = arg3
                int32_t eax_3
                eax_3.b = 1
                return eax_3

eax_1.b = 0
return eax_1
