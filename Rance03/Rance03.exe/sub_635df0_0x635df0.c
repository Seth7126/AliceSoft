// 函数: sub_635df0
// 地址: 0x635df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6ce5e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_68
uint32_t arg_8
*arg1 = arg_8
char* arg_c
arg1[1] = arg_c
char* var_18 = nullptr
arg_c = nullptr
void (* var_1c)(void* arg1, char* arg2, uint32_t arg3) = nullptr
int32_t var_8_1 = 0
char* eax_5 = sub_62ad10()
var_18 = eax_5

if (eax_5 != 0)
    int32_t eax_6 = *(eax_5 + 0x274)
    char* eax_7
    
    if (eax_6 == 0)
        eax_7 = _malloc(0x10c)
    else
        eax_7 = eax_6(eax_5, 0x10c)
    
    int32_t* var_28_1 = eax_7
    
    if (eax_7 != 0)
        _memset(eax_7, 0, 0x10c)
    
    arg_c = eax_7
    
    if (eax_7 != 0)
        void (* eax_8)(void* arg1, char* arg2, uint32_t arg3) = sub_627510(eax_5)
        int32_t* var_3c_1 = eax_8
        var_1c = eax_8
        
        if (eax_8 != 0)
            sub_62ba90(eax_8, arg1, eax_5, sub_635ce0)
            sub_62ad80(eax_5, eax_7)
            uint32_t var_40
            int32_t j_9
            uint32_t var_34
            uint32_t var_30
            int32_t i_6
            uint32_t var_20
            sub_62a9b0(&j_9, eax_7, eax_5, &j_9, &i_6, &var_20, &var_30, &var_34, &var_40, &arg_8)
            uint32_t ecx_8 = var_30
            char var_2c_1
            bool cond:0_1
            
            if (ecx_8 u> 6)
            label_635f35:
                sub_62ba10(&var_1c, &arg_c, &var_18, &var_1c)
            else
                switch (ecx_8)
                    case 0
                        uint32_t eax_10 = var_20
                        
                        if (eax_10 != 8)
                            cond:0_1 = eax_10 == 0x10
                            goto label_635f33
                        
                    label_635f4b:
                        var_2c_1 = 1
                        goto label_635f55
                    case 1, 4, 5
                        goto label_635f35
                    case 2, 6
                        var_2c_1 = 0
                    label_635f55:
                        int32_t j_8 = j_9
                        uint32_t eax_13 = ecx_8 u>> 2 & 0xffffff01
                        var_34 = eax_13
                        var_40.b = eax_13.b
                        uint32_t eax_14 = *(eax_7 + 0xc)
                        int32_t i_5 = i_6
                        arg_8 = eax_14
                        char* var_4c
                        sub_448e90(&var_4c, eax_14 * i_5)
                        char** var_58 = nullptr
                        int32_t var_54_1 = 0
                        int32_t var_50_1 = 0
                        var_8_1.b = 2
                        int32_t i_7 = 0
                        
                        while (true)
                            i_6 = i_7
                            
                            if (i_7 s>= i_5)
                                break
                            
                            j_9 = &var_4c[i_7 * arg_8]
                            sub_412de0(&var_58, &j_9)
                            i_7 = i_6 + 1
                        
                        if (eax_5 != 0)
                            *(eax_5 + 0x7c) |= 1
                        
                        sub_62b0f0(eax_5, var_28_1)
                        sub_62b470(eax_5, var_58)
                        sub_62b530(eax_5, var_3c_1)
                        
                        if (eax_5 != 0)
                            sub_627560(eax_5, &var_1c)
                            sub_627560(eax_5, &arg_c)
                            var_18 = nullptr
                            sub_62b820(eax_5)
                            sub_62aa70(eax_5)
                        
                        if (sub_635d80(arg2, j_8, i_5, var_40.b, var_2c_1) != 0)
                            uint32_t eax_21 = var_30
                            uint32_t eax_22
                            
                            if (eax_21 == 3)
                                eax_22 = var_20
                                
                                if (eax_22 != 8)
                                    goto label_636059
                                
                            label_6360a3:
                                void* esi_2 = (*(*arg2 + 8))(0, 0)
                                int32_t* eax_27 = (*(*arg2 + 0x1c))() - (j_8 << 2)
                                arg2 = eax_27
                                
                                if (i_5 s> 0)
                                    int32_t edx_11 = 0
                                    int32_t i
                                    
                                    do
                                        int32_t ecx_22 = 0
                                        
                                        if (j_8 s> 0)
                                            do
                                                *esi_2 = 0xffff
                                                *(esi_2 + 2) = 0xff
                                                void* eax_29
                                                eax_29.b = var_4c[edx_11 + ecx_22]
                                                ecx_22 += 1
                                                *(esi_2 + 3) = eax_29.b
                                                esi_2 += 4
                                            while (ecx_22 s< j_8)
                                            
                                            eax_27 = arg2
                                        
                                        edx_11 += arg_8
                                        esi_2 += eax_27
                                        i = i_5
                                        i_5 -= 1
                                    while (i != 1)
                                
                            label_6362ed:
                                char** eax_57 = var_58
                                
                                if (eax_57 != 0)
                                    j__free(eax_57)
                                
                                char* eax_58 = var_4c
                                
                                if (eax_58 != 0)
                                    j__free(eax_58)
                                
                                eax_58.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_58
                            
                            eax_22 = var_20
                            
                            if (eax_21 == 0)
                                if (eax_22 == 8)
                                    goto label_6360a3
                                
                                if (eax_22 != 0x10)
                                    goto label_636210
                                
                                void* esi_3 = (*(*arg2 + 8))(0, 0)
                                int32_t* eax_33 = (*(*arg2 + 0x1c))() - (j_8 << 2)
                                
                                if (i_5 s> 0)
                                    int32_t* ecx_26 = eax_33
                                    char* eax_34 = nullptr
                                    uint32_t edx_13 = arg_8
                                    arg_c = nullptr
                                    int32_t i_1
                                    
                                    do
                                        if (j_8 s> 0)
                                            char* ecx_27 = eax_34
                                            int32_t j_4 = j_8
                                            int32_t j
                                            
                                            do
                                                *esi_3 = 0xffff
                                                ecx_27 = &ecx_27[2]
                                                *(esi_3 + 2) = 0xff
                                                char* eax_35
                                                eax_35.b = *(ecx_27 + var_4c - 2)
                                                *(esi_3 + 3) = eax_35.b
                                                esi_3 += 4
                                                j = j_4
                                                j_4 -= 1
                                            while (j != 1)
                                            eax_34 = arg_c
                                            ecx_26 = eax_33
                                            edx_13 = arg_8
                                        
                                        eax_34 = &eax_34[edx_13]
                                        esi_3 += ecx_26
                                        arg_c = eax_34
                                        i_1 = i_5
                                        i_5 -= 1
                                    while (i_1 != 1)
                                
                                goto label_6362ed
                            
                        label_636059:
                            
                            if (eax_22 != 0x10)
                            label_636210:
                                void* esi_5 = (*(*arg2 + 8))(0, 0)
                                int32_t* eax_47 = (*(*arg2 + 0x1c))() - (j_8 << 2)
                                
                                if (var_34.b == 0)
                                    if (i_5 s> 0)
                                        uint32_t ecx_38 = arg_8
                                        char* eax_53 = nullptr
                                        int32_t* edx_18 = eax_47
                                        arg_c = nullptr
                                        int32_t i_2
                                        
                                        do
                                            if (j_8 s> 0)
                                                char* ecx_39 = eax_53
                                                int32_t j_7 = j_8
                                                int32_t j_1
                                                
                                                do
                                                    ecx_39 = &ecx_39[3]
                                                    char* eax_54
                                                    eax_54.b = *(ecx_39 + var_4c - 1)
                                                    *esi_5 = eax_54.b
                                                    char* eax_55
                                                    eax_55.b = *(ecx_39 + var_4c - 2)
                                                    *(esi_5 + 1) = eax_55.b
                                                    char* eax_56
                                                    eax_56.b = *(ecx_39 + var_4c - 3)
                                                    *(esi_5 + 2) = eax_56.b
                                                    *(esi_5 + 3) = 0xff
                                                    esi_5 += 4
                                                    j_1 = j_7
                                                    j_7 -= 1
                                                while (j_1 != 1)
                                                eax_53 = arg_c
                                                ecx_38 = arg_8
                                                edx_18 = eax_47
                                            
                                            eax_53 = &eax_53[ecx_38]
                                            esi_5 += edx_18
                                            arg_c = eax_53
                                            i_2 = i_5
                                            i_5 -= 1
                                        while (i_2 != 1)
                                else if (i_5 s> 0)
                                    uint32_t ecx_36 = arg_8
                                    char* eax_48 = nullptr
                                    int32_t* edx_17 = eax_47
                                    arg_c = nullptr
                                    int32_t i_3
                                    
                                    do
                                        if (j_8 s> 0)
                                            char* ecx_37 = eax_48
                                            int32_t j_6 = j_8
                                            int32_t j_2
                                            
                                            do
                                                ecx_37 = &ecx_37[4]
                                                char* eax_49
                                                eax_49.b = *(ecx_37 + var_4c - 2)
                                                *esi_5 = eax_49.b
                                                char* eax_50
                                                eax_50.b = *(ecx_37 + var_4c - 3)
                                                *(esi_5 + 1) = eax_50.b
                                                char* eax_51
                                                eax_51.b = *(ecx_37 + var_4c - 4)
                                                *(esi_5 + 2) = eax_51.b
                                                char* eax_52
                                                eax_52.b = *(ecx_37 + var_4c - 1)
                                                *(esi_5 + 3) = eax_52.b
                                                esi_5 += 4
                                                j_2 = j_6
                                                j_6 -= 1
                                            while (j_2 != 1)
                                            eax_48 = arg_c
                                            ecx_36 = arg_8
                                            edx_17 = eax_47
                                        
                                        eax_48 = &eax_48[ecx_36]
                                        esi_5 += edx_17
                                        arg_c = eax_48
                                        i_3 = i_5
                                        i_5 -= 1
                                    while (i_3 != 1)
                                
                                goto label_6362ed
                            
                            if (var_34.b == 0)
                                void* esi_4 = (*(*arg2 + 8))(0, 0)
                                int32_t* eax_39 = (*(*arg2 + 0x1c))() - (j_8 << 2)
                                
                                if (i_5 s> 0)
                                    uint32_t ecx_31 = arg_8
                                    char* eax_40 = nullptr
                                    int32_t* edx_15 = eax_39
                                    arg_c = nullptr
                                    int32_t i_4
                                    
                                    do
                                        if (j_8 s> 0)
                                            char* ecx_32 = eax_40
                                            int32_t j_5 = j_8
                                            int32_t j_3
                                            
                                            do
                                                ecx_32 = &ecx_32[6]
                                                char* eax_41
                                                eax_41.b = *(ecx_32 + var_4c - 2)
                                                *esi_4 = eax_41.b
                                                char* eax_42
                                                eax_42.b = *(ecx_32 + var_4c - 4)
                                                *(esi_4 + 1) = eax_42.b
                                                char* eax_43
                                                eax_43.b = *(ecx_32 + var_4c - 6)
                                                *(esi_4 + 2) = eax_43.b
                                                *(esi_4 + 3) = 0xff
                                                esi_4 += 4
                                                j_3 = j_5
                                                j_5 -= 1
                                            while (j_3 != 1)
                                            eax_40 = arg_c
                                            ecx_31 = arg_8
                                            edx_15 = eax_39
                                        
                                        eax_40 = &eax_40[ecx_31]
                                        esi_4 += edx_15
                                        arg_c = eax_40
                                        i_4 = i_5
                                        i_5 -= 1
                                    while (i_4 != 1)
                                
                                goto label_6362ed
                            
                            char** eax_23 = var_58
                            
                            if (eax_23 != 0)
                                j__free(eax_23)
                            
                            sub_403510(&var_4c)
                        else
                            char** eax_20 = var_58
                            
                            if (eax_20 != 0)
                                j__free(eax_20)
                            
                            eax_5 = var_4c
                            
                            if (eax_5 != 0)
                                j__free(eax_5)
                    case 3
                        cond:0_1 = var_20 == 8
                    label_635f33:
                        
                        if (cond:0_1)
                            goto label_635f4b
                        
                        goto label_635f35
        else
            sub_62ba10(eax_8, &arg_c, &var_18, eax_8)
    else
        var_18 = eax_7
        sub_62b820(eax_5)
        sub_62aa70(eax_5)

eax_5.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
