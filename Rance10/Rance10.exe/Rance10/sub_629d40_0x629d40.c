// 函数: sub_629d40
// 地址: 0x629d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
uint32_t eax_3 = *(arg4 + 0x34)

switch (eax_3)
    case 0, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x2f, 0x33, 0x43, 0x50, 0x59, 0x5c, 0x5d
        *arg2 = arg3
    label_629d79:
        eax_3.b = 1
        @__security_check_cookie@4(eax_1 ^ &var_1c)
        return eax_3
    case 0xc
        void* ebx_1 = *(arg1 + 0x24)
        uint32_t edi_1 = sub_6227b0(ebx_1, arg3)
        
        if (edi_1 != 0)
            eax_3 = sub_6227b0(ebx_1, *arg2)
            
            if (eax_3 != 0)
                char* eax_4
                
                if (*(edi_1 + 0x14) != 0)
                    eax_4 = *(edi_1 + 0x10)
                else
                    eax_4 = nullptr
                
                sub_403360(&var_1c, eax_4)
                ebx_1.b = sub_625800(eax_3, &var_1c)
                sub_403320(&var_1c)
                char* eax_6
                eax_6.b = ebx_1.b
                @__security_check_cookie@4(eax_1 ^ &var_1c)
                return eax_6
    case 0xd
        void* edi_3 = *(arg1 + 0x24)
        uint32_t ebx_3 = sub_6228d0(edi_3, arg3)
        
        if (ebx_3 != 0)
            eax_3 = sub_6228d0(edi_3, *arg2)
            
            if (eax_3 != 0)
                int32_t eax_12 = (*(*(eax_3 + 0x20) + 4))(ebx_3 + 0x20)
                @__security_check_cookie@4(eax_1 ^ &var_1c)
                return eax_12
    case 0x3f
        void* edi_4 = *(arg1 + 0x24)
        uint32_t ebx_4 = sub_622960(edi_4, arg3)
        
        if (ebx_4 != 0)
            eax_3 = sub_622960(edi_4, *arg2)
            
            if (eax_3 != 0)
                (**(eax_3 + 0x20))()
                char* eax_14 = sub_5ff490(eax_3, ebx_4)
                @__security_check_cookie@4(eax_1 ^ &var_1c)
                return eax_14
    case 0x4f
        void* ebx_2 = *(arg1 + 0x24)
        uint32_t edi_2 = sub_622840(ebx_2, arg3)
        
        if (edi_2 != 0)
            uint32_t esi_2 = sub_622840(ebx_2, *arg2)
            
            if (esi_2 != 0)
                if (*(esi_2 + 0x38) != 0)
                    eax_3 = (*(*esi_2 + 4))()
                
                if (*(esi_2 + 0x38) == 0 || eax_3.b != 0)
                    if (*(edi_2 + 0x38) == 0)
                        goto label_629d79
                    
                    uint32_t eax_9 = sub_627ce0(esi_2, edi_2)
                    @__security_check_cookie@4(eax_1 ^ &var_1c)
                    return eax_9

eax_3.b = 0
@__security_check_cookie@4(eax_1 ^ &var_1c)
return eax_3
