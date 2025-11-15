// 函数: sub_45c4b0
// 地址: 0x45c4b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bc90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_5c = ebx
int32_t esi
int32_t var_60 = esi
int32_t edi
int32_t var_64 = edi
int32_t __saved_ebp
uint32_t* var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_68
uint32_t arg_8
*arg1 = arg_8
int32_t* arg_c
arg1[1] = arg_c
int32_t* var_18
int32_t* var_6c = &var_18
int32_t var_1c = nullptr
arg_c = nullptr
var_18 = nullptr
int32_t var_8_1 = 0
sub_45c3b0(&var_18, &arg_c, &var_1c, var_6c)
int32_t edi_1 = var_1c

if (edi_1 != 0)
    bool cond:0_1 = *(edi_1 + 0x58) == 0
    *(edi_1 + 0x60) = arg1
    *(edi_1 + 0x5c) = sub_45bff0
    
    if (not(cond:0_1))
        *(edi_1 + 0x58) = 0
        sub_6a7530(edi_1, "Can't set both read_data_fn and write_data_fn in the same structure")
    
    *(edi_1 + 0x17c) = 0

int32_t* ebx_1 = arg_c
sub_6a7d80(edi_1, ebx_1)
uint32_t* var_6c_1 = &arg_8
uint32_t var_40
uint32_t* var_70 = &var_40
uint32_t var_3c
uint32_t* var_74 = &var_3c
uint32_t var_34
uint32_t var_2c
uint32_t* var_24
int32_t var_20
sub_6a79d0(&var_24, ebx_1, edi_1, &var_24, &var_20, &var_2c, &var_34, var_74, var_70, var_6c_1)
uint32_t ecx_4 = var_34
int32_t result
uint32_t** esp_1

if (ecx_4 u> 6)
    sub_45c450(&var_18, &arg_c, &var_1c, &var_18)
    esp_1 = &var_68
else
    switch (ecx_4)
        case 0
            uint32_t eax_8 = var_2c
            
            if (eax_8 == 8 || eax_8 == 0x10)
                goto label_45c5b7
            
            sub_45c450(&var_18, &arg_c, &var_1c, &var_18)
            esp_1 = &var_68
        case 1, 4, 5
            sub_45c450(&var_18, &arg_c, &var_1c, &var_18)
            esp_1 = &var_68
        case 2, 6
            arg_8:3.b = 0
        label_45c5c6:
            uint32_t eax_11 = ecx_4 u>> 2 & 0xffffff01
            var_3c = eax_11
            var_40.b = eax_11.b
            int32_t eax_12
            
            if (edi_1 == 0 || ebx_1 == 0)
                eax_12 = 0
            else
                eax_12 = ebx_1[3]
            
            int32_t var_4c
            sub_431b80(&var_4c, eax_12 * var_20)
            char** ebx_2 = nullptr
            int32_t esi_2 = 0
            char** var_58 = nullptr
            int32_t var_54_1 = 0
            int32_t var_50_1 = 0
            var_8_1.b = 2
            int32_t eax_14 = 0
            
            while (eax_14 s< var_20)
                void* var_38 = eax_14 * eax_12 + var_4c
                sub_428f00(&var_58, &var_38)
                esi_2 = var_50_1
                eax_14 += 1
                ebx_2 = var_58
            
            if (edi_1 != 0)
                *(edi_1 + 0x7c) |= 1
                int32_t eax_18 = *(edi_1 + 0x78)
                
                if ((eax_18.b & 0x40) != 0)
                    if ((eax_18 & &__dos_header) == 0)
                        sub_6a7500(edi_1, 
                            "png_read_update_info/png_start_read_image: duplicate call")
                        noreturn
                    
                    sub_6a7530(edi_1, "png_read_update_info/png_start_read_image: duplicate call")
                else
                    sub_6b1580(edi_1)
                    sub_6a9950(edi_1, arg_c)
            
            sub_6a8420(edi_1, ebx_2)
            sub_6a8500(edi_1, var_18)
            
            if (edi_1 != 0)
                int32_t** eax_19 = var_18
                
                if (arg_c != 0)
                    int32_t* edx_7 = &arg_c
                    
                    if (eax_19 == 0)
                        sub_6a89b0(eax_19, edx_7, &var_1c, nullptr)
                    else
                        sub_6a89b0(&var_18, edx_7, &var_1c, &var_18)
                else if (eax_19 == 0)
                    sub_6a89b0(eax_19, nullptr, &var_1c, nullptr)
            
            int32_t edx_8 = var_20
            uint32_t* edi_2 = var_24
            int32_t eax_20 = *arg3
            
            if (arg_8:3.b == 0)
                bool cond:3_1 = var_3c.b == 0
                int32_t var_6c_7 = 0x20
                int32_t var_70_2 = edx_8
                var_74 = edi_2
                esp_1 = &var_74
                
                if (cond:3_1)
                    result = (*(eax_20 + 0xc))()
                else
                    result = (*(eax_20 + 8))()
            else
                result = (*(eax_20 + 0x10))(edi_2, edx_8)
                esp_1 = &var_68
            
            int32_t var_44
            
            if (result != 0)
                *(esp_1 - 4) = var_40
                *(esp_1 - 8) = eax_12
                *(esp_1 - 0xc) = var_20
                *(arg2 + 8) = result
                *(esp_1 - 0x10) = edi_2
                *(esp_1 - 0x14) = var_2c
                *(esp_1 - 0x18) = var_34
                
                if (sub_45c320().b != 0)
                    if (ebx_2 != 0)
                        *(esp_1 - 4) = 4
                        *(esp_1 - 8) = (esi_2 - ebx_2) s>> 2
                        *(esp_1 - 0xc) = ebx_2
                        sub_403160()
                    
                    int32_t ecx_18 = var_4c
                    
                    if (ecx_18 != 0)
                        *(esp_1 - 4) = 1
                        *(esp_1 - 8) = var_44 - ecx_18
                        *(esp_1 - 0xc) = ecx_18
                        sub_403160()
                    
                    result.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    *esp_1
                    esp_1[1]
                    esp_1[2]
                    esp_1[3]
                    return result
            
            if (ebx_2 != 0)
                *(esp_1 - 4) = 4
                *(esp_1 - 8) = (esi_2 - ebx_2) s>> 2
                *(esp_1 - 0xc) = ebx_2
                sub_403160()
            
            int32_t ecx_15 = var_4c
            
            if (ecx_15 != 0)
                *(esp_1 - 4) = 1
                *(esp_1 - 8) = var_44 - ecx_15
                *(esp_1 - 0xc) = ecx_15
                sub_403160()
        case 3
            if (var_2c == 8)
            label_45c5b7:
                arg_8:3.b = 1
                goto label_45c5c6
            
            sub_45c450(&var_18, &arg_c, &var_1c, &var_18)
            esp_1 = &var_68

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return result
