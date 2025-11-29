
#include "imgsensor_ca.h"
#include "tee_client_api.h"
#include "tee_client_api_cust.h"

unsigned int imgsensor_ca_open(void)
{
	return TEEC_SUCCESS;
}

void imgsensor_ca_close(void)
{
}

void imgsensor_ca_release(void)
{
}

unsigned int  imgsensor_ca_invoke_command(
	enum IMGSENSOR_TEE_CMD cmd, struct command_params parms, MUINT32 *ret)
{
	return TEEC_SUCCESS;
}

