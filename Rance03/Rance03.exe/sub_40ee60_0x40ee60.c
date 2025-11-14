// 函数: sub_40ee60
// 地址: 0x40ee60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t var_1c = __security_cookie ^ &var_5c
int32_t ebx
int32_t var_60 = ebx
int32_t esi
int32_t var_64 = esi
int32_t edi
int32_t var_68 = edi
int32_t var_6c = __security_cookie ^ &var_68
int32_t* esp_1 = &var_6c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = arg2
int32_t edi_1 = arg3[1]
void* i = *arg3
int32_t* var_58 = arg4
int32_t var_48 = arg6

for (; i != edi_1; i += 0x74)
    sub_405be0(i)

int32_t* esi_1 = arg3
esi_1[1] = *esi_1
int32_t* result

if (arg4 != 0)
    result = (*(*arg4 + 4))(arg5)
    esp_1 = &var_6c
    int32_t* result_1 = result
    
    if (result == 0)
        result.b = 0
    else
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = sx.q((*(*result + 0x14))())
        int32_t ebx_3 = ((edx_1 & 3) + eax_9) s>> 2
        int32_t var_44_1 = ebx_3
        sub_4102c0(esi_1, ebx_3)
        esp_1 = &var_6c
        int32_t i_1 = 0
        
        if (ebx_3 s> 0)
            int32_t ebx_4 = 0
            int32_t var_54_1 = 0
            
            do
                int32_t eax_11 = (*(*esp_1[0xb] + 0x18))()
                int32_t ecx_6 = esp_1[9]
                void* esi_3 = *esi_1 + ebx_4
                esp_1[4] = eax_11 + (i_1 << 2)
                *(esp_1 - 4) = &esp_1[0xc]
                int32_t* eax_14 = sub_420ed0(ecx_6)
                esp_1[0x18] = 0
                *(esi_3 + 4) = *eax_14
                *(esi_3 + 8) = eax_14[1]
                
                if (esi_3 + 0xc != &eax_14[2])
                    *(esp_1 - 4) = 0xffffffff
                    *(esp_1 - 8) = 0
                    *(esp_1 - 0xc) = &eax_14[2]
                    sub_401ff0(esi_3 + 0xc)
                
                esp_1[0x18] = 0xffffffff
                
                if (esp_1[0x13] u>= 0x10)
                    *(esp_1 - 4) = esp_1[0xe]
                    j__free()
                
                int32_t temp0_1 = *(esi_3 + 8)
                *(esi_3 + 8) -= 1
                esp_1[0x13] = 0xf
                esp_1[0x12] = 0
                esp_1[0xe].b = 0
                
                if (temp0_1 - 1 s< 0)
                    switch (*(esi_3 + 4) - 0xe)
                        case nullptr
                            int32_t** eax_20 = esp_1[4]
                            *(esi_3 + 4) = 0xa
                            *(esi_3 + 0x44) = *eax_20
                            *(esi_3 + 0x70) = 1
                        case 1
                            int32_t** eax_22 = esp_1[4]
                            *(esi_3 + 4) = 0xb
                            *(esi_3 + 0x48) = *eax_22
                            *(esi_3 + 0x70) = 1
                        case 2
                            int32_t* ecx_12 = esp_1[5]
                            void* edx_6 = esp_1[4]
                            *(esi_3 + 4) = 0xc
                            int32_t eax_23 = *ecx_12
                            *(esp_1 - 4) = *edx_6
                            *(esi_3 + 0x70) = sub_40ec10(esi_3 + 0x4c, (*(eax_23 + 4))()).b
                        case 3
                            void* eax_25 = esp_1[4]
                            *(esi_3 + 4) = 0xd
                            *(esp_1 - 4) = *eax_25
                            *(esp_1 - 8) = esp_1[5]
                            *(esp_1 - 0xc) = esp_1[8]
                            esp_1 = esp_1
                            *(esi_3 + 0x70) = sub_40ec90(eax_25, esi_3 + 0x64, esi_3 + 0xc).b
                        case 0x24
                            int32_t** eax_21 = esp_1[4]
                            *(esi_3 + 4) = 0x2f
                            *(esi_3 + 0x44) = *eax_21
                            *(esi_3 + 0x70) = 1
                else
                    int32_t* ecx_10 = esp_1[5]
                    int32_t eax_16 = *esp_1[4]
                    *(esi_3 + 0x3c) = eax_16
                    int32_t edx_4 = *ecx_10
                    *(esp_1 - 4) = eax_16
                    int32_t eax_17 = (*(edx_4 + 0x24))()
                    esp_1[8]
                    *(esi_3 + 8) = eax_17
                    void* eax_18 = esp_1[4]
                    *(esp_1 - 4) = esi_3 + 4
                    *(esp_1 - 8) = *eax_18
                    *(esp_1 - 0xc) = esp_1[5]
                    esp_1 += 0xc
                    *(esi_3 + 0x70) = sub_40ee60().b
                
                i_1 += 1
                esi_1 = esp_1[7]
                ebx_4 = esp_1[6] + 0x74
                esp_1[6] = ebx_4
            while (i_1 s< esp_1[0xa])
        
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = esp_1[0x16]
esp_1[1]
esp_1[2]
esp_1[3]
sub_69a5bc(esp_1[0x14] ^ &esp_1[4])
return result
