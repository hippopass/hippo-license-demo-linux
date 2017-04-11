/* Copyright (C) 2017 HippoSecurity */
#ifndef HIPPO_H
#define HIPPO_H

# ifdef __cplusplus
extern "C"
{
# endif

int hippo_init(char* apiKey);
size_t hippo_get_gcode(int handle, char* buf, size_t len);
int hippo_verify_otp(int handle, char* licenseKey, char* hostId, char* otp);
int hippo_get_license_count(int handle);
void hippo_done(int handle);

# ifdef __cplusplus
}
# endif

#endif /* HIPPO_H */

