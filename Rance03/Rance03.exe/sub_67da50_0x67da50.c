// 函数: sub_67da50
// 地址: 0x67da50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0c38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CSplitWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &dpparts::CSplitWindow::`vftable'
int32_t var_4 = 5
void* ebp = &arg1[0x18]
int32_t* edi = *ebp
int32_t* i = *edi

if (i != edi)
    do
        void* ebp_1 = i[4]
        
        if (ebp_1 != 0)
            HWND hWnd = *(ebp_1 + 8)
            
            if (hWnd != 0 && *(ebp_1 + 0xc) != 0)
                DestroyWindow(hWnd)
                void* eax_3 = *(ebp_1 + 4)
                *(ebp_1 + 8) = 0
                
                if (UnregisterClassA(*(eax_3 + 0x28), *(eax_3 + 0x14)) != 0)
                    *(ebp_1 + 0xc) = 0
            
            int32_t* ecx = i[4]
            
            if (ecx != 0)
                (*(*ecx + 4))(1)
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != edi)
    
    ebp = &arg1[0x18]

int32_t* ecx_1 = arg1[0x23]

if (ecx_1 != 0)
    struct dpparts::CSplitWindow::VTable** var_28_3 = var_10
    int32_t* var_2c_2 = ecx_1
    sub_48c2c0(ecx_1, arg1[0x24])
    j__free(arg1[0x23])
    arg1[0x23] = 0
    arg1[0x24] = 0
    arg1[0x25] = 0

int32_t* ecx_2 = arg1[0x20]

if (ecx_2 != 0)
    struct dpparts::CSplitWindow::VTable** var_28_4 = var_10
    int32_t* var_2c_3 = ecx_2
    sub_48c2c0(ecx_2, arg1[0x21])
    j__free(arg1[0x20])
    arg1[0x20] = 0
    arg1[0x21] = 0
    arg1[0x22] = 0

int32_t eax_6 = arg1[0x1d]

if (eax_6 != 0)
    j__free(eax_6)
    arg1[0x1d] = 0
    arg1[0x1e] = 0
    arg1[0x1f] = 0

int32_t eax_7 = arg1[0x1a]

if (eax_7 != 0)
    j__free(eax_7)
    arg1[0x1a] = 0
    arg1[0x1b] = 0
    arg1[0x1c] = 0

int32_t** eax_8 = *ebp
sub_67f8f0(ebp, &var_10, *eax_8, eax_8)
int32_t result = j__free(*ebp)

if (arg1[0x12] u>= 0x10)
    result = j__free(arg1[0xd])

arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
