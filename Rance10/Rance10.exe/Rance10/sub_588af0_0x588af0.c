// 函数: sub_588af0
// 地址: 0x588af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
eax.b = *(arg1 + 0x2c)
void* ebx = arg1 + 0x2c

if (eax.b == 0)
    eax.b = *ebx
    
    if (eax.b == 0 && *(arg1 + 0x40) != 0)
        if (sub_568f30(*(arg1 + 0x28), arg3) == 0)
            return 0
        
        bool cond:2_1 = *(arg1 + 0x44) u< 0x10
        void* eax_2 = arg1 + 0x30
        *(eax_2 + 0x10) = 0
        
        if (not(cond:2_1))
            eax_2 = *eax_2
        
        *eax_2 = 0
    
    int32_t* edi_1 = *(arg1 + 0x28)
    
    if (edi_1 == 0)
    label_588bdf:
        int32_t (__fastcall* const* eax_11)(int32_t* arg1) = &(*arg2)->vFunc_1
        
        if (arg1 + 0x30 != eax_11)
            sub_403590(arg1 + 0x30, eax_11, 0, 0xffffffff)
        
        *(arg1 + 0x48)
        *(arg1 + 0x48) = (*arg2)->__offset(0x214).d
        void* eax_13
        eax_13.b = 1
        char temp0_2 = *ebx
        *ebx = 1
        eax_13.b = temp0_2
        
        if (*(arg1 + 0x80) != 0)
            struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                ** eax_14 = sub_6e810c(0x10)
            arg2 = eax_14
            eax_14[1] = 1
            *eax_14 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
            eax_14[2] = arg1
            eax_14[3] = sub_588c80
            struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                ** var_20_3 = eax_14
            sub_406700(*(arg1 + 0x7c))
            BOOL eax_15
            eax_15.b = 1
            return eax_15
        
        if (sub_588c80(arg1) == 0)
            return 0
        
        if (sub_568f30(*(arg1 + 0x28), arg3) == 0)
            return 0
        
        sub_404d20(arg1 + 0x30)
    else
        struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
            * eax_4 = *arg2
        int32_t (__fastcall* const* edx_1)(int32_t* arg1) = &eax_4->vFunc_1
        int32_t ecx_1 = eax_4->__offset(0x214).d
        int32_t* ecx_2 = &edi_1[0x14]
        
        if (eax_4->__offset(0x18).d u>= 0x10)
            edx_1 = *edx_1
        
        void* eax_5 = &ecx_2[4]
        
        if (ecx_2[5] u>= 0x10)
            ecx_2 = *ecx_2
        
        int32_t ebp_2 = edx_1[4]
        int32_t eax_6 = ebp_2
        
        if (*eax_5 u< ebp_2)
            eax_6 = *eax_5
        
        int32_t eax_7 = sub_406ac0(eax_6, edx_1, ecx_2, eax_6)
        ebx = arg1 + 0x2c
        int32_t eax_8
        
        if (eax_7 == 0)
            eax_8 = *eax_5
        
        if (eax_7 != 0 || eax_8 u< ebp_2 || eax_8 u> ebp_2 || edi_1[0x1a] != ecx_1)
            *(arg1 + 0x28) = 0
            
            if (edi_1 != 0)
                (*(*edi_1 + 0x1c))(1)
            
            sub_57e9e0(*(arg1 + 0x88))
            goto label_588bdf

eax.b = 1
return eax
