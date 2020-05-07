class client
{
	public static void main(String args{[])
	{
		BufferedReader inFromUser = new InputStreamReader(System.in);
		DatagramSocket ClientSocket = new DatagramSocket();
		InetAddress Ipaddress = InetAddress.getByName(...);
		byte[] sendData = new byte[1024];
		byte[] receiveData = new byte[1024];
		String sentence = inFromUser.readLine();
		DatagramPacket SendPacket = new DatagramPacket(sendData,sendData.length,Ipaddress,9876);
		clientSocket.send(sendPacket);
		DatagramPacket receivePacker = new DatagramPacket(receiveData,receiveData.length);
		clientSocket.receive(receiveSocket);
		String modified sent
	}
}