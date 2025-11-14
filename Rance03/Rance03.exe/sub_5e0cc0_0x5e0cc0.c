// 函数: sub_5e0cc0
// 地址: 0x5e0cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_esi_1 = *(arg1 + 0x10)

if (__saved_esi_1 s>= (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
    int32_t __saved_esi = __saved_esi_1
    sub_64b530(0x6eade0)
    enum MESSAGEBOX_RESULT eax_2
    eax_2.b = 0
    return eax_2

*(arg1 + 0x10) = __saved_esi_1 + 1
int32_t* esi = arg2
int32_t* edi = *(arg1 + 4) + (__saved_esi_1 << 2)
int32_t* eax_7

if (sub_40c250(esi, "DPAnalysis") == 0)
    if (sub_40c250(esi, "DPVariable") == 0)
        if (sub_40c250(esi, "DPLogViewer") == 0)
            if (sub_40c250(esi, "DPParts") == 0)
                if (sub_40c250(esi, "DPSound") == 0)
                    if (esi[5] u>= 0x10)
                        esi = *esi
                    
                    int32_t* var_c_6 = esi
                    sub_64b530(0x6eaeb8)
                    enum MESSAGEBOX_RESULT eax_27
                    eax_27.b = 0
                    return eax_27
                
                int32_t* ecx_11 = data_75d558
                
                if (ecx_11 != 0)
                    (**ecx_11)()
                    eax_7 = data_75d558
                
                if (ecx_11 == 0 || eax_7 == 0)
                    if (esi[5] u>= 0x10)
                        esi = *esi
                    
                    int32_t* var_c_5 = esi
                    sub_64b530(0x6eae8c)
                    enum MESSAGEBOX_RESULT eax_26
                    eax_26.b = 0
                    return eax_26
            else
                int32_t* ecx_9 = data_75d554
                
                if (ecx_9 != 0)
                    (**ecx_9)()
                    eax_7 = data_75d554
                
                if (ecx_9 == 0 || eax_7 == 0)
                    if (esi[5] u>= 0x10)
                        esi = *esi
                    
                    int32_t* var_c_3 = esi
                    sub_64b530(0x6eaee0)
                    enum MESSAGEBOX_RESULT eax_19
                    eax_19.b = 0
                    return eax_19
        else
            void* ecx_6 = data_75d550
            
            if (ecx_6 == 0)
            label_5e0dce:
                
                if (esi[5] u>= 0x10)
                    esi = *esi
                
                int32_t* var_c_2 = esi
                sub_64b530(0x6eae20)
                enum MESSAGEBOX_RESULT eax_16
                eax_16.b = 0
                return eax_16
            
            (**(ecx_6 + 4))()
            void* eax_15 = data_75d550
            
            if (eax_15 == 0)
                goto label_5e0dce
            
            eax_7 = eax_15 + 4
            
            if (eax_15 == 0xfffffffc)
                goto label_5e0dce
    else
        void* ecx_3 = data_75d4b8
        
        if (ecx_3 == 0)
        label_5e0d7d:
            
            if (esi[5] u>= 0x10)
                esi = *esi
            
            int32_t* var_c_1 = esi
            sub_64b530(0x6eae54)
            enum MESSAGEBOX_RESULT eax_12
            eax_12.b = 0
            return eax_12
        
        (**(ecx_3 + 0x84))()
        void* eax_11 = data_75d4b8
        
        if (eax_11 == 0)
            goto label_5e0d7d
        
        eax_7 = eax_11 + 0x84
        
        if (eax_11 == 0xffffff7c)
            goto label_5e0d7d
else
    int32_t* ecx_1 = data_75d4a0
    
    if (ecx_1 != 0)
        (**ecx_1)()
        eax_7 = data_75d4a0
    
    if (ecx_1 == 0 || eax_7 == 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        int32_t* var_c = esi
        sub_64b530(0x6eada8)
        enum MESSAGEBOX_RESULT eax_8
        eax_8.b = 0
        return eax_8

*edi = eax_7

if ((*(*eax_7 + 8))() != 0)
    return 1

if (esi[5] u>= 0x10)
    esi = *esi

int32_t* var_c_4 = esi
sub_64b530(0x6ead60)
enum MESSAGEBOX_RESULT eax_25
eax_25.b = 0
return eax_25
