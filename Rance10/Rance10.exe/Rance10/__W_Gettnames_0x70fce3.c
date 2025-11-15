// 函数: __W_Gettnames
// 地址: 0x70fce3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_34 = edi
uint32_t (* result)[0x4] = nullptr
void* var_2c
_LocaleUpdate::_LocaleUpdate(&var_2c, nullptr)
int32_t edx = 0
void* var_14 = nullptr
void* edi_1 = 0x164
int32_t var_c = 0
void* var_28
int32_t* ecx_1 = *(var_28 + 0x9c)
uint32_t (* result_2)[0x4] = nullptr
int32_t* var_8 = ecx_1
uint32_t (* result_1)[0x4] = nullptr

while (true)
    if (edx == 1)
        uint32_t (* result_3)[0x4] = __malloc_base(edi_1)
        result_1 = result_3
        
        if (result_3 == 0)
            break
        
        _memset(result_3, 0, edi_1)
        result_2 = result_1
        ecx_1 = var_8
        var_14 = edi_1
        edi_1 = 0x164
    
    int32_t edx_1 = 0
    void* var_18_2 = result_2 - ecx_1
    int32_t* ebx_1 = ecx_1
    int32_t var_1c_1 = 0
    void* ebx_23
    
    while (true)
        if (var_c != 1)
            goto label_70fd7f
        
        void* ecx_3 = result_2 + edi_1
        *(var_18_2 + ebx_1) = ecx_3
        
        if (_strcpy_s(ecx_3, var_14 - edi_1, *ebx_1) == 0)
            edx_1 = var_1c_1
        label_70fd7f:
            char* ecx_4 = *ebx_1
            void* eax_5
            
            do
                eax_5.b = *ecx_4
                ecx_4 = &ecx_4[1]
            while (eax_5.b != 0)
            result_2 = result_1
            edi_1 = edi_1 + 1 + ecx_4 - &ecx_4[1]
            edx_1 += 1
            ebx_1 = &ebx_1[1]
            var_1c_1 = edx_1
            
            if (edx_1 u< 7)
                continue
            else
                int32_t i = 0
                int32_t i_4 = 0
                int32_t* ebx_3 = &var_8[7]
                
                do
                    if (var_c == 1)
                        char* ecx_7 = result_1 + edi_1
                        *(ebx_3 + var_18_2) = ecx_7
                        
                        if (_strcpy_s(ecx_7, var_14 - edi_1, *ebx_3) != 0)
                            goto label_7103da
                        
                        i = i_4
                    
                    char* ecx_8 = *ebx_3
                    void* eax_10
                    
                    do
                        eax_10.b = *ecx_8
                        ecx_8 = &ecx_8[1]
                    while (eax_10.b != 0)
                    edi_1 = edi_1 + 1 + ecx_8 - &ecx_8[1]
                    ebx_3 = &ebx_3[1]
                    i += 1
                    i_4 = i
                while (i u< 7)
                
                int32_t i_1 = 0
                int32_t i_5 = 0
                int32_t* ebx_5 = &var_8[0xe]
                
                do
                    if (var_c == 1)
                        char* ecx_11 = result_1 + edi_1
                        *(ebx_5 + var_18_2) = ecx_11
                        
                        if (_strcpy_s(ecx_11, var_14 - edi_1, *ebx_5) != 0)
                            goto label_7103da
                        
                        i_1 = i_5
                    
                    char* ecx_12 = *ebx_5
                    void* eax_15
                    
                    do
                        eax_15.b = *ecx_12
                        ecx_12 = &ecx_12[1]
                    while (eax_15.b != 0)
                    edi_1 = edi_1 + 1 + ecx_12 - &ecx_12[1]
                    ebx_5 = &ebx_5[1]
                    i_1 += 1
                    i_5 = i_1
                while (i_1 u< 0xc)
                
                int32_t i_2 = 0
                int32_t i_6 = 0
                int32_t* ebx_7 = &var_8[0x1a]
                
                do
                    if (var_c == 1)
                        char* ecx_15 = result_1 + edi_1
                        *(ebx_7 + var_18_2) = ecx_15
                        
                        if (_strcpy_s(ecx_15, var_14 - edi_1, *ebx_7) != 0)
                            goto label_7103da
                        
                        i_2 = i_6
                    
                    char* ecx_16 = *ebx_7
                    void* eax_20
                    
                    do
                        eax_20.b = *ecx_16
                        ecx_16 = &ecx_16[1]
                    while (eax_20.b != 0)
                    edi_1 = edi_1 + 1 + ecx_16 - &ecx_16[1]
                    ebx_7 = &ebx_7[1]
                    i_2 += 1
                    i_6 = i_2
                while (i_2 u< 0xc)
                
                int32_t i_3 = 0
                int32_t i_7 = 0
                int32_t* ebx_9 = &var_8[0x26]
                
                do
                    if (var_c == 1)
                        char* ecx_19 = result_1 + edi_1
                        *(ebx_9 + var_18_2) = ecx_19
                        
                        if (_strcpy_s(ecx_19, var_14 - edi_1, *ebx_9) != 0)
                            goto label_7103da
                        
                        i_3 = i_7
                    
                    char* ecx_20 = *ebx_9
                    void* eax_25
                    
                    do
                        eax_25.b = *ecx_20
                        ecx_20 = &ecx_20[1]
                    while (eax_25.b != 0)
                    edi_1 = edi_1 + 1 + ecx_20 - &ecx_20[1]
                    ebx_9 = &ebx_9[1]
                    i_3 += 1
                    i_7 = i_3
                while (i_3 u< 2)
                
                if (var_c != 1)
                label_70ff3f:
                    char* ecx_23 = var_8[0x28]
                    int32_t* eax_30
                    
                    do
                        eax_30.b = *ecx_23
                        ecx_23 = &ecx_23[1]
                    while (eax_30.b != 0)
                    void* edi_8 = edi_1 + 1 + ecx_23 - &ecx_23[1]
                    
                    if (var_c != 1)
                    label_70ff86:
                        char* ecx_26 = var_8[0x29]
                        int32_t* eax_35
                        
                        do
                            eax_35.b = *ecx_26
                            ecx_26 = &ecx_26[1]
                        while (eax_35.b != 0)
                        void* edi_10 = edi_8 + 1 + ecx_26 - &ecx_26[1]
                        
                        if (var_c != 1)
                        label_70ffcd:
                            char* ecx_29 = *(var_8 + 0xa8)
                            void* eax_40
                            
                            do
                                eax_40.b = *ecx_29
                                ecx_29 = &ecx_29[1]
                            while (eax_40.b != 0)
                            
                            int32_t edx_5 = var_c
                            uint32_t (* result_4)[0x4] = result_1
                            void* ebx_12 = ecx_29 - &ecx_29[1] + 1 + edi_10
                            
                            if (edx_5 == 1)
                                (*result_4)[0x2b] = var_8[0x2b]
                                result_4[0xb][0] = 0
                            
                            void* var_1c_7 = nullptr
                            void* edi_12 = &var_8[0x2d]
                            
                            while (true)
                                if ((ebx_12.b & 1) != 0)
                                    ebx_12 += 1
                                else
                                    if (edx_5 == 1)
                                        void* ecx_31 = result_4 + (ebx_12 u>> 1 << 1)
                                        *(edi_12 + var_18_2) = ecx_31
                                        
                                        if (_wcscpy_s(ecx_31, (var_14 - ebx_12) u>> 1, *edi_12)
                                                != 0)
                                            goto label_7103da
                                    
                                    int16_t* ecx_32 = *edi_12
                                    
                                    do
                                        eax_40.w = *ecx_32
                                        ecx_32 = &ecx_32[1]
                                    while (eax_40.w != 0)
                                    
                                    edx_5 = var_c
                                    edi_12 += 4
                                    result_4 = result_1
                                    ebx_12 = ebx_12 + ((ecx_32 - &ecx_32[1]) s>> 1 << 1) + 2
                                    eax_40 = var_1c_7 + 1
                                    var_1c_7 = eax_40
                                    
                                    if (eax_40 u>= 7)
                                        break
                            
                            void* var_1c_8 = nullptr
                            void* edi_14 = &var_8[0x34]
                            
                            while (true)
                                if ((ebx_12.b & 1) != 0)
                                    ebx_12 += 1
                                else
                                    if (var_c == 1)
                                        void* ecx_36 = result_1 + (ebx_12 u>> 1 << 1)
                                        *(edi_14 + var_18_2) = ecx_36
                                        
                                        if (_wcscpy_s(ecx_36, (var_14 - ebx_12) u>> 1, *edi_14)
                                                != 0)
                                            goto label_7103da
                                    
                                    int16_t* ecx_37 = *edi_14
                                    
                                    do
                                        eax_40.w = *ecx_37
                                        ecx_37 = &ecx_37[1]
                                    while (eax_40.w != 0)
                                    
                                    edi_14 += 4
                                    ebx_12 = ebx_12 + ((ecx_37 - &ecx_37[1]) s>> 1 << 1) + 2
                                    eax_40 = var_1c_8 + 1
                                    var_1c_8 = eax_40
                                    
                                    if (eax_40 u>= 7)
                                        break
                            
                            void* var_1c_9 = nullptr
                            void* edi_16 = &var_8[0x3b]
                            
                            while (true)
                                if ((ebx_12.b & 1) != 0)
                                    ebx_12 += 1
                                else
                                    if (var_c == 1)
                                        void* ecx_41 = result_1 + (ebx_12 u>> 1 << 1)
                                        *(edi_16 + var_18_2) = ecx_41
                                        
                                        if (_wcscpy_s(ecx_41, (var_14 - ebx_12) u>> 1, *edi_16)
                                                != 0)
                                            goto label_7103da
                                    
                                    int16_t* ecx_42 = *edi_16
                                    
                                    do
                                        eax_40.w = *ecx_42
                                        ecx_42 = &ecx_42[1]
                                    while (eax_40.w != 0)
                                    
                                    edi_16 += 4
                                    ebx_12 = ebx_12 + ((ecx_42 - &ecx_42[1]) s>> 1 << 1) + 2
                                    eax_40 = var_1c_9 + 1
                                    var_1c_9 = eax_40
                                    
                                    if (eax_40 u>= 0xc)
                                        break
                            
                            void* var_1c_10 = nullptr
                            void* edi_18 = &var_8[0x47]
                            
                            while (true)
                                if ((ebx_12.b & 1) != 0)
                                    ebx_12 += 1
                                else
                                    if (var_c == 1)
                                        void* ecx_46 = result_1 + (ebx_12 u>> 1 << 1)
                                        *(edi_18 + var_18_2) = ecx_46
                                        
                                        if (_wcscpy_s(ecx_46, (var_14 - ebx_12) u>> 1, *edi_18)
                                                != 0)
                                            goto label_7103da
                                    
                                    int16_t* ecx_47 = *edi_18
                                    
                                    do
                                        eax_40.w = *ecx_47
                                        ecx_47 = &ecx_47[1]
                                    while (eax_40.w != 0)
                                    
                                    edi_18 += 4
                                    ebx_12 = ebx_12 + ((ecx_47 - &ecx_47[1]) s>> 1 << 1) + 2
                                    eax_40 = var_1c_10 + 1
                                    var_1c_10 = eax_40
                                    
                                    if (eax_40 u>= 0xc)
                                        break
                            
                            void* var_1c_11 = nullptr
                            void* edi_20 = &var_8[0x53]
                            
                            while (true)
                                if ((ebx_12.b & 1) != 0)
                                    ebx_12 += 1
                                else
                                    if (var_c == 1)
                                        void* ecx_51 = result_1 + (ebx_12 u>> 1 << 1)
                                        *(edi_20 + var_18_2) = ecx_51
                                        
                                        if (_wcscpy_s(ecx_51, (var_14 - ebx_12) u>> 1, *edi_20)
                                                != 0)
                                            goto label_7103da
                                    
                                    int16_t* ecx_52 = *edi_20
                                    
                                    do
                                        eax_40.w = *ecx_52
                                        ecx_52 = &ecx_52[1]
                                    while (eax_40.w != 0)
                                    
                                    edi_20 += 4
                                    ebx_12 = ebx_12 + ((ecx_52 - &ecx_52[1]) s>> 1 << 1) + 2
                                    eax_40 = var_1c_11 + 1
                                    var_1c_11 = eax_40
                                    
                                    if (eax_40 u>= 2)
                                        break
                            
                            while ((ebx_12.b & 1) != 0)
                                ebx_12 += 1
                            
                            if (var_c != 1)
                            label_71026f:
                                int16_t* ecx_56 = var_8[0x55]
                                int32_t* eax_84
                                
                                do
                                    eax_84.w = *ecx_56
                                    ecx_56 = &ecx_56[1]
                                while (eax_84.w != 0)
                                void* ebx_19 = ebx_12 + ((ecx_56 - &ecx_56[1]) s>> 1 << 1) + 2
                                
                                while ((ebx_19.b & 1) != 0)
                                    ebx_19 += 1
                                
                                if (var_c != 1)
                                label_7102cd:
                                    int16_t* ecx_60 = var_8[0x56]
                                    int32_t* eax_92
                                    
                                    do
                                        eax_92.w = *ecx_60
                                        ecx_60 = &ecx_60[1]
                                    while (eax_92.w != 0)
                                    void* ebx_21 = ebx_19 + ((ecx_60 - &ecx_60[1]) s>> 1 << 1) + 2
                                    
                                    while ((ebx_21.b & 1) != 0)
                                        ebx_21 += 1
                                    
                                    if (var_c != 1)
                                    label_71032b:
                                        int16_t* ecx_64 = var_8[0x57]
                                        int32_t* eax_100
                                        
                                        do
                                            eax_100.w = *ecx_64
                                            ecx_64 = &ecx_64[1]
                                        while (eax_100.w != 0)
                                        ebx_23 = ebx_21 + ((ecx_64 - &ecx_64[1]) s>> 1 << 1) + 2
                                        
                                        while ((ebx_23.b & 1) != 0)
                                            ebx_23 += 1
                                        
                                        if (var_c != 1)
                                            break
                                        
                                        void* ecx_67 = result_1 + (ebx_23 u>> 1 << 1)
                                        result_1[0x16][0] = ecx_67
                                        
                                        if (_wcscpy_s(ecx_67, (var_14 - ebx_23) u>> 1, var_8[0x58])
                                                == 0)
                                            break
                                    else
                                        void* ecx_63 = result_1 + (ebx_21 u>> 1 << 1)
                                        (*result_1)[0x57] = ecx_63
                                        
                                        if (_wcscpy_s(ecx_63, (var_14 - ebx_21) u>> 1, var_8[0x57])
                                                == 0)
                                            goto label_71032b
                                else
                                    void* ecx_59 = result_1 + (ebx_19 u>> 1 << 1)
                                    (*result_1)[0x56] = ecx_59
                                    
                                    if (_wcscpy_s(ecx_59, (var_14 - ebx_19) u>> 1, var_8[0x56])
                                            == 0)
                                        goto label_7102cd
                            else
                                void* ecx_55 = result_1 + (ebx_12 u>> 1 << 1)
                                (*result_1)[0x55] = ecx_55
                                
                                if (_wcscpy_s(ecx_55, (var_14 - ebx_12) u>> 1, var_8[0x55]) == 0)
                                    goto label_71026f
                        else
                            char* ecx_28 = result_1 + edi_10
                            (*result_1)[0x2a] = ecx_28
                            
                            if (_strcpy_s(ecx_28, var_14 - edi_10, var_8[0x2a]) == 0)
                                goto label_70ffcd
                    else
                        char* ecx_25 = result_1 + edi_8
                        (*result_1)[0x29] = ecx_25
                        
                        if (_strcpy_s(ecx_25, var_14 - edi_8, var_8[0x29]) == 0)
                            goto label_70ff86
                else
                    char* ecx_22 = result_1 + edi_1
                    result_1[0xa][0] = ecx_22
                    
                    if (_strcpy_s(ecx_22, var_14 - edi_1, var_8[0x28]) == 0)
                        goto label_70ff3f
        
    label_7103da:
        int32_t var_4c
        __builtin_memset(&var_4c, 0, 0x14)
        __invoke_watson()
        noreturn
    
    int16_t* ecx_68 = var_8[0x58]
    int32_t* eax_108
    
    do
        eax_108.w = *ecx_68
        ecx_68 = &ecx_68[1]
    while (eax_108.w != 0)
    edx = var_c + 1
    var_c = edx
    edi_1 = ebx_23 + ((((ecx_68 - &ecx_68[1]) s>> 1) + 1) << 1)
    
    if (edx s>= 2)
        result = result_1
        break
    
    result_2 = result_1
    ecx_1 = var_8

char var_20

if (var_20 != 0)
    void* ecx_71 = var_2c
    *(ecx_71 + 0x350) &= 0xfffffffd

return result
