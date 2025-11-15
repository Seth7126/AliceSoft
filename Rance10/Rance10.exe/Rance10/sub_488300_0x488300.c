// 函数: sub_488300
// 地址: 0x488300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1

if (arg2 == 0)
    void* eax
    eax.b = 0
    return eax

struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** eax_1 =
    sub_488c90(arg1 + 4, arg3)

if (eax_1 != 0)
    bool cond:0_1 = sub_489210(arg2, arg3, eax_1, arg4) != 0
    struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable* eax_3 = *eax_1
    
    if (cond:0_1)
        eax_3->vFunc_1()
        void* eax_4 = sub_488e10(arg1 + 4, arg3)
        int32_t eax_5
        
        if (eax_4 != 0)
            eax_5 = *(eax_4 + 8)
        
        if (eax_4 == 0 || eax_5 s< 0)
            int32_t eax_6
            eax_6.b = arg2[3].b == 0
            eax_5 = eax_6 + 1
        
        arg2[4] = eax_5
        void* eax_7 = sub_488e10(arg1 + 4, arg3)
        int32_t edi_1
        
        if (eax_7 != 0)
            edi_1 = *(eax_7 + 4)
        else
            edi_1 = 0xffffffff
        
        void* eax_8 = sub_488e10(arg1 + 4, arg3)
        
        if (eax_8 != 0)
            int32_t edx_1 = *eax_8
            
            if (edx_1 s>= 0 && edi_1 s>= 0)
                (*(*arg2[1] + 0x34))(edx_1, edi_1)
        
        int32_t var_18_6 = 0xffffffff
        long double x87_r0
        sub_4864e0(*(arg1 + 0x9c), x87_r0, arg2)
        sub_4893f0(arg2, 0, 0)
        int32_t eax_10
        eax_10.b = 1
        return eax_10
    
    eax_3->vFunc_1()

eax_1.b = 0
return eax_1
