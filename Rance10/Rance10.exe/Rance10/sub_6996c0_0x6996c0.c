// 函数: sub_6996c0
// 地址: 0x6996c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = arg1[0xd]

if (ecx != 0)
    int32_t edx
    edx.b = arg1[0xe].b
    
    if (edx.b == 0 || ecx[0x1b].b == 0)
        if (*(*(*ecx + 8))(edx) != 0)
            char eax_4
            
            if (arg1[8] != 0)
                eax_4 = sub_699760(arg1)
            label_69971b:
                
                if (eax_4 != 0)
                    return 0
            else if (sub_6997c0(arg1, 0) != 0)
                while (WaitForSingleObject(arg1[0x12], 1) != WAIT_OBJECT_0)
                    sub_699b00(arg1)
                
                eax_4 = sub_699a70(arg1)
                goto label_69971b
        
        return 0xffffffff

sub_69b040()
int32_t* var_4 = &data_7fd53c
int32_t var_8 = 4
std::_Throw_future_error(&var_8)
noreturn
