// 函数: sub_58ae40
// 地址: 0x58ae40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7ae8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    int32_t* ecx_2 = *(arg1 + 8)
    int32_t __saved_edi
    
    if (ecx_2 != 0 && (*(*ecx_2 + 0x10))(__security_cookie ^ &__saved_edi) != 0)
        int32_t eax_7 = (*(**(arg1 + 8) + 0xbc))(0)
        
        for (int32_t* i = *(arg1 + 0x134); i != *(arg1 + 0x138); i = &i[1])
            void* ecx_4 = *i
            
            if (ecx_4 != 0)
                eax_7 = sub_546ee0(ecx_4)
        
        int32_t* ecx_6 = nullptr
        struct sealengine::CDrawInstanceList::VTable* var_1c =
            &sealengine::CDrawInstanceList::`vftable'
        int32_t* var_18 = nullptr
        int32_t var_10 = 0
        int32_t var_4 = 0
        int32_t* edx = nullptr
        int32_t* i_1 = *(arg1 + 0x134)
        int32_t* var_14 = nullptr
        
        if (i_1 != *(arg1 + 0x138))
            do
                void* ecx_5 = *i_1
                
                if (ecx_5 != 0)
                    eax_7 = sub_546db0(ecx_5, &var_1c)
                
                i_1 = &i_1[1]
            while (i_1 != *(arg1 + 0x138))
            
            edx = var_14
            ecx_6 = var_18
        
        if (ecx_6 != edx)
            int32_t var_38_2 = 0.d
            void var_40
            sub_5344f0(eax_7, edx, ecx_6, var_40)
        
        sub_58afc0(arg1)
        int32_t eax_8
        int32_t ecx_9
        int32_t edx_1
        eax_8, ecx_9, edx_1 = sub_58c010(arg1)
        int32_t ebx
        
        if (eax_8.b != 0)
            *(arg1 + 0x118) = *(arg1 + 0x124)
            *(arg1 + 0x11c) = *(*(arg1 + 4) + 0x174)
            
            if (sub_58c2b0(arg1, i_1, &var_1c) == 0)
                ebx.b = 0
            else if (sub_58b320(arg1) == 0)
                ebx.b = 0
            else
                char eax_15
                int80_t st0_1
                st0_1, eax_15 = sub_58b360(arg1, arg1, &var_1c)
                
                if (eax_15 == 0)
                    ebx.b = 0
                else
                    (*(**(arg1 + 8) + 0xb0))()
                    ebx.b = 1
        else
            sub_59f4e0(eax_8, edx_1, ecx_9, 0x6e5984)
            ebx.b = 0
        
        sub_534460(&var_1c)
        int32_t eax_9
        eax_9.b = ebx.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return 

fsbase->NtTib.ExceptionList = ExceptionList
