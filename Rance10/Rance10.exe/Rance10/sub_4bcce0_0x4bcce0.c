// 函数: sub_4bcce0
// 地址: 0x4bcce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg4
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((edi - arg2) s>> 2)
int32_t* var_30 = arg3
void* ebx = &arg2[(eax_3 - edx) s>> 1]
void* var_1c = ebx
sub_4bd2c0(edi - 4, ebx, arg2, edi - 4)
int32_t* eax_7 = ebx + 4
int32_t* var_18 = eax_7

if (arg2 u< ebx)
    while (true)
        int32_t* esi_1 = *(ebx - 4)
        int32_t* edi_1 = *ebx
        int32_t eax_10 = (*(*esi_1 + 0x14))()
        int32_t ebx_1 = (*(*esi_1 + 0x10))()
        int32_t eax_12 = (*(*edi_1 + 0x14))()
        int32_t eax_13 = (*(*edi_1 + 0x10))()
        
        if (eax_13 s< eax_12)
            eax_13 = eax_12
        
        if (ebx_1 s< eax_10)
            ebx_1 = eax_10
        
        if (ebx_1 s<= eax_13)
            int32_t* esi_3 = *var_1c
            int32_t* edi_3 = *(ebx - 4)
            int32_t eax_16 = (*(*esi_3 + 0x14))()
            int32_t ebx_2 = (*(*esi_3 + 0x10))()
            int32_t eax_18 = (*(*edi_3 + 0x14))()
            int32_t eax_19 = (*(*edi_3 + 0x10))()
            
            if (eax_19 s< eax_18)
                eax_19 = eax_18
            
            if (ebx_2 s< eax_16)
                ebx_2 = eax_16
            
            if (ebx_2 s<= eax_19)
                ebx -= 4
                var_1c = ebx
                
                if (arg2 u>= ebx)
                    break
                
                continue
        
        ebx = var_1c
        break
    
    eax_7 = var_18
    edi = arg4

while (eax_7 u< edi)
    int32_t* esi_5 = *eax_7
    int32_t* edi_4 = *ebx
    int32_t eax_21 = (*(*esi_5 + 0x14))()
    int32_t ebx_3 = (*(*esi_5 + 0x10))()
    int32_t eax_23 = (*(*edi_4 + 0x14))()
    int32_t eax_24 = (*(*edi_4 + 0x10))()
    
    if (eax_24 s< eax_23)
        eax_24 = eax_23
    
    if (ebx_3 s< eax_21)
        ebx_3 = eax_21
    
    eax_7 = var_18
    
    if (ebx_3 s> eax_24)
        edi = arg4
        break
    
    int32_t* edi_5 = *eax_7
    int32_t* esi_7 = *var_1c
    int32_t eax_27 = (*(*esi_7 + 0x14))()
    int32_t ebx_4 = (*(*esi_7 + 0x10))()
    int32_t eax_29 = (*(*edi_5 + 0x14))()
    int32_t eax_30 = (*(*edi_5 + 0x10))()
    edi = arg4
    
    if (eax_30 s< eax_29)
        eax_30 = eax_29
    
    if (ebx_4 s< eax_27)
        ebx_4 = eax_27
    
    eax_7 = var_18
    
    if (ebx_4 s> eax_30)
        break
    
    ebx = var_1c
    eax_7 = &eax_7[1]
    var_18 = eax_7

void* ebp_5 = var_1c
int32_t* esi_9 = eax_7
void* edx_14 = ebp_5
void* var_14 = edx_14

while (true)
    int32_t* var_c_2 = esi_9
    
    while (true)
        if (esi_9 u< edi)
            do
                int32_t* edi_6 = *ebp_5
                int32_t* ebx_5 = *esi_9
                int32_t eax_32 = (*(*edi_6 + 0x14))()
                int32_t ebp_6 = (*(*edi_6 + 0x10))()
                int32_t eax_34 = (*(*ebx_5 + 0x14))()
                int32_t eax_35 = (*(*ebx_5 + 0x10))()
                
                if (eax_35 s< eax_34)
                    eax_35 = eax_34
                
                if (ebp_6 s< eax_32)
                    ebp_6 = eax_32
                
                if (ebp_6 s<= eax_35)
                    int32_t* edi_8 = *esi_9
                    int32_t* ebx_6 = *var_1c
                    int32_t eax_38 = (*(*edi_8 + 0x14))()
                    int32_t ebp_7 = (*(*edi_8 + 0x10))()
                    int32_t eax_40 = (*(*ebx_6 + 0x14))()
                    int32_t eax_41 = (*(*ebx_6 + 0x10))()
                    
                    if (eax_41 s< eax_40)
                        eax_41 = eax_40
                    
                    if (ebp_7 s< eax_38)
                        ebp_7 = eax_38
                    
                    if (ebp_7 s> eax_41)
                        break
                    
                    int32_t* eax_42 = var_18
                    void* edx_22 = &var_18[1]
                    var_18 = edx_22
                    
                    if (eax_42 != esi_9)
                        int32_t ecx_25 = *(edx_22 - 4)
                        *(edx_22 - 4) = *esi_9
                        *esi_9 = ecx_25
                
                ebp_5 = var_1c
                esi_9 = &esi_9[1]
            while (esi_9 u< arg4)
            
            ebp_5 = var_1c
            edx_14 = var_14
            var_c_2 = esi_9
        
        bool cond:2_1 = edx_14 != arg2
        
        if (edx_14 u> arg2)
            void* esi_10 = edx_14 - 4
            int32_t* eax_57
            
            do
                int32_t* edi_10 = *esi_10
                int32_t* ebx_7 = *ebp_5
                int32_t eax_46 = (*(*edi_10 + 0x14))()
                int32_t ebp_8 = (*(*edi_10 + 0x10))()
                int32_t eax_48 = (*(*ebx_7 + 0x14))()
                int32_t eax_49 = (*(*ebx_7 + 0x10))()
                
                if (eax_49 s< eax_48)
                    eax_49 = eax_48
                
                if (ebp_8 s< eax_46)
                    ebp_8 = eax_46
                
                if (ebp_8 s> eax_49)
                    ebp_5 = var_1c
                else
                    int32_t* ebx_8 = *esi_10
                    int32_t* edi_12 = *var_1c
                    int32_t eax_52 = (*(*edi_12 + 0x14))()
                    int32_t ebp_9 = (*(*edi_12 + 0x10))()
                    int32_t eax_54 = (*(*ebx_8 + 0x14))()
                    int32_t eax_55 = (*(*ebx_8 + 0x10))()
                    
                    if (eax_55 s< eax_54)
                        eax_55 = eax_54
                    
                    if (ebp_9 s< eax_52)
                        ebp_9 = eax_52
                    
                    if (ebp_9 s> eax_55)
                        edx_14 = var_14
                        eax_57 = arg2
                        break
                    
                    ebp_5 = var_1c - 4
                    var_1c = ebp_5
                    
                    if (ebp_5 != esi_10)
                        int32_t ecx_34 = *ebp_5
                        *ebp_5 = *esi_10
                        *esi_10 = ecx_34
                
                esi_10 -= 4
                eax_57 = arg2
                edx_14 = var_14 - 4
                var_14 = edx_14
            while (eax_57 u< edx_14)
            
            esi_9 = var_c_2
            cond:2_1 = edx_14 != eax_57
        
        if (not(cond:2_1))
            if (esi_9 == arg4)
                *arg3 = var_1c
                arg3[1] = var_18
                return arg3
            
            if (var_18 != esi_9)
                int32_t ecx_35 = *var_1c
                *var_1c = *var_18
                *var_18 = ecx_35
            
            int32_t* edi_14 = esi_9
            void* edx_30 = var_1c
            ebp_5 = var_1c + 4
            var_18 = &var_18[1]
            esi_9 = &esi_9[1]
            var_1c = ebp_5
            int32_t ecx_36 = *edx_30
            *edx_30 = *edi_14
            edx_14 = var_14
            *edi_14 = ecx_36
            edi = arg4
            break
        
        edi = arg4
        edx_14 -= 4
        ebp_5 = var_1c
        var_14 = edx_14
        
        if (esi_9 != edi)
            int32_t ecx_39 = *esi_9
            *esi_9 = *edx_14
            esi_9 = &esi_9[1]
            *edx_14 = ecx_39
            break
        
        ebp_5 -= 4
        var_1c = ebp_5
        
        if (edx_14 != ebp_5)
            int32_t ecx_37 = *edx_14
            *edx_14 = *ebp_5
            *ebp_5 = ecx_37
        
        int32_t ecx_38 = *ebp_5
        void* ebx_12 = var_18 - 4
        var_18 = ebx_12
        *ebp_5 = *ebx_12
        *ebx_12 = ecx_38
