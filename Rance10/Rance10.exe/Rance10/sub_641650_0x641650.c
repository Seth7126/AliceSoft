// 函数: sub_641650
// 地址: 0x641650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746340
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24 = arg1
int32_t* result = arg1[3]

if (result s>= arg1[4])
    int32_t* result_2 = nullptr
    void* esi_1 = nullptr
    int32_t* result_1 = nullptr
    void* var_2c_1 = nullptr
    int32_t var_20_1 = 0
    int32_t var_28_1 = 0
    int32_t var_8_1 = 0
    void* edi_1 = &arg1[1]
    void* var_1c_1 = edi_1
    int32_t* i_7 = **edi_1
    int32_t* i_2 = i_7
    
    if (i_7 != *edi_1)
        int32_t* i
        
        do
            sub_642140(&result_1, &i_2)
            i = i_2
            
            if (*(i + 0xd) == 0)
                int32_t* i_4 = i[2]
                
                if (*(i_4 + 0xd) != 0)
                    int32_t* i_6 = i[1]
                    
                    if (*(i_6 + 0xd) == 0)
                        while (i == i_6[2])
                            i = i_6
                            i_6 = i_6[1]
                            
                            if (*(i_6 + 0xd) != 0)
                                break
                    
                    i = i_6
                else
                    i = i_4
                    int32_t* i_5 = *i
                    
                    while (*(i_5 + 0xd) == 0)
                        i = i_5
                        i_5 = *i
                
                i_2 = i
        while (i != *edi_1)
        result_2 = result_1
        esi_1 = var_2c_1
        var_20_1 = var_28_1
    
    char var_14 = 0
    int32_t eax_7 = (esi_1 - result_2) s>> 2
    sub_642d50(eax_7, esi_1, result_2, eax_7, &var_14)
    int32_t i_3 = 0
    void* ecx_2 = nullptr
    void* var_3c = nullptr
    int32_t i_1 = 0
    int32_t var_34_1 = 0
    var_8_1.b = 1
    
    if (result_2 != esi_1)
        do
            void* ebx_1 = &result_2[(esi_1 - result_2) s>> 2]
            void* esi_2 = *(*(ebx_1 - 4) + 0x60)
            (***(esi_2 + 4))(eax_2)
            int32_t* edi_2 = *(esi_2 + 4)
            int32_t eax_14 = (*(*edi_2 + 0x14))()
            int32_t eax_15 = (*(*edi_2 + 0x10))()
            (*(*edi_2 + 4))()
            int32_t* edi_3 = var_24
            edi_3[3] -= (eax_14 * eax_15) << 2
            sub_642070(&var_3c, *(ebx_1 - 4) + 0x10)
            esi_1 = var_2c_1 - 4
            var_2c_1 = esi_1
            
            if (edi_3[3] s< edi_3[5])
                break
            
            result_2 = result_1
        while (result_2 != esi_1)
        
        ecx_2 = var_3c
        edi_1 = var_1c_1
        i_3 = i_1
    
    if (ecx_2 != i_3)
        int32_t* ebx_2 = ecx_2 + 0x38
        
        do
            void** eax_20 = sub_642ad0(edi_1, &ebx_2[-0xe])
            int32_t* edi_4 = *edi_1
            int32_t* esi_7 = eax_20
            
            if (esi_7 == edi_4)
                esi_7 = edi_4
            else if (sub_643940(&ebx_2[-0xd], &esi_7[5]) != 0)
                esi_7 = edi_4
            else if (sub_6439e0(&ebx_2[-0xd], &esi_7[5]) == 0
                    && sub_413c90(ebx_2, &esi_7[0x12]) != 0)
                esi_7 = edi_4
            
            edi_1 = var_1c_1
            
            if (esi_7 != *edi_1)
                int32_t* ecx_12 = esi_7[0x18]
                
                if (ecx_12 != 0)
                    (**ecx_12)(1)
                
                sub_642240(edi_1, &var_24, esi_7)
            
            ebx_2 = &ebx_2[0x14]
        while (&ebx_2[-0xe] != i_1)
    
    sub_642670(&var_3c)
    result = result_1
    
    if (result != 0)
        result = sub_403160(result, (var_20_1 - result) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
