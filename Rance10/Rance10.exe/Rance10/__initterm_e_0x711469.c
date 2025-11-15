// 函数: __initterm_e
// 地址: 0x711469
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = arg1
int32_t edi
int32_t var_10 = edi
int32_t result

while (true)
    if (esi == arg2)
        result = 0
        break
    
    int32_t edi_1 = *esi
    
    if (edi_1 != 0)
        result = edi_1()
        
        if (result != 0)
            break
    
    esi = &esi[1]

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
